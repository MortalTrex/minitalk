/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbalazs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 12:51:03 by rbalazs           #+#    #+#             */
/*   Updated: 2023/11/20 12:53:28 by rbalazs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int				i;
	int				sign;
	long int		res;

	res = 0;
	i = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		if (str[i + 1] == '+' || str[i + 1] == '-')
			return (0);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res + (str[i] - '0');
		res *= 10;
		i++;
	}
	return ((res * sign) / 10);
}

/*
#include <stdlib.h>
#include <stdio.h>
int main()
{
  char escape[] = {9, 10, 11, 12, 13, 0};
	printf("ma fonction : %d\n", ft_atoi(escape + 1));
	printf("le vrai atoi : %d\n", atoi(escape + 1));
}
*/	
