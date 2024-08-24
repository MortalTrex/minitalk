/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbalazs <rbalazs@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 18:17:56 by rbalazs           #+#    #+#             */
/*   Updated: 2024/07/09 21:25:57 by rbalazs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minitalk.h"

char	*joinchar(char const *s1, char c)
{
	int		len;
	int		i;
	char	*res;

	len = ft_strlen(s1) + 1;
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (s1 && s1[i])
	{
		res[i] = s1[i];
		i++;
	}
	res[i++] = c;
	res[i] = '\0';
	return (res);
}

void	receive_binary(int signal, siginfo_t *info, void *v)
{
	static int	bit;
	static int	c;
	static char	*str;
	int			finish;

	(void)v;
	finish = 0;
	if (signal == SIGUSR1)
		c |= (1 << bit);
	bit++;
	if (bit == 8)
	{
		str = joinchar(str, c);
		if (c == '\0')
			finish = 1;
		bit = 0;
		c = 0;
	}
	if (finish == 1)
	{
		ft_printf("%s\n", str);
		free(str);
		str = NULL;
	}
	kill(info->si_pid, SIGUSR1);
}

int	main(int argc, char **argv)
{
	int					pid;
	struct sigaction	s;

	(void)s;
	ft_bzero(&s, sizeof(s));
	s.sa_sigaction = receive_binary;
	s.sa_flags = SA_SIGINFO;
	sigaction(SIGUSR1, &s, NULL);
	sigaction(SIGUSR2, &s, NULL);
	(void)s;
	(void)argv;
	if (argc != 1)
	{
		ft_printf("Arguments received are not valid\n");
		return (EXIT_FAILURE);
	}
	pid = getpid();
	ft_printf("PID: %d\n", pid);
	while (1)
		;
	return (EXIT_SUCCESS);
}
