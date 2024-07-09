/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbalazs <rbalazs@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 18:17:52 by rbalazs           #+#    #+#             */
/*   Updated: 2024/07/09 21:26:01 by rbalazs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minitalk.h"

int		g_confirm_signal;

int	send_binary(int pid, char c)
{
	int	i;

	i = 0;
	while (i < 8)
	{
		if (c & (1 << i))
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		while (g_confirm_signal == 0)
			;
		g_confirm_signal = 0;
		i++;
	}
	return (EXIT_SUCCESS);
}

bool	verif_pid(char *pid)
{
	int	i;

	i = 0;
	while (pid[i])
	{
		if (!ft_isdigit(pid[i]))
			return (false);
		i++;
	}
	return (true);
}

void	confirm_signal(int signal)
{
	if (signal == SIGUSR1)
		g_confirm_signal = 1;
}

int	main(int argc, char **argv)
{
	int	pid;
	int	i;

	i = 0;
	g_confirm_signal = 0;
	signal(SIGUSR1, confirm_signal);
	if (argc != 3)
	{
		ft_printf("Incorrect arguments\n");
		return (EXIT_FAILURE);
	}
	pid = ft_atoi(argv[1]);
	if (verif_pid(argv[1]) == false)
	{
		ft_printf("PID is not valid\n");
		return (EXIT_FAILURE);
	}
	while (argv[2][i])
	{
		send_binary(pid, argv[2][i]);
		i++;
	}
	send_binary(pid, 0);
	return (EXIT_SUCCESS);
}
