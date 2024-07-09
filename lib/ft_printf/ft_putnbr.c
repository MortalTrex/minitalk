/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbalazs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 19:14:20 by rbalazs           #+#    #+#             */
/*   Updated: 2024/01/05 19:14:23 by rbalazs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb, int count)
{
	char	res;
	int		tmp;

	tmp = count;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * (-1);
		tmp++;
	}
	if (nb >= 10)
		tmp = ft_putnbr(nb / 10, tmp + 1);
	nb = nb % 10;
	res = nb + '0';
	write (1, &res, 1);
	return (tmp);
}

/*
int	main()
{
	int nb = 2147483;
	printf("%d", ft_putnbr(nb, 1));
	write (1, "\n", 1);
	return 0;
}
*/
