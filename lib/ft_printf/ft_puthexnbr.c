/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbalazs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 19:13:29 by rbalazs           #+#    #+#             */
/*   Updated: 2024/01/05 19:13:32 by rbalazs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexnbr(unsigned long nb, int minmaj, int count)
{
	char	*hex;

	if (minmaj == 0)
		hex = "0123456789abcdef";
	if (minmaj == 1)
		hex = "0123456789ABCDEF";
	if (nb >= 16)
		count = ft_puthexnbr (nb / 16, minmaj, count + 1);
	write (1, &hex[nb % 16], 1);
	return (count);
}

/*
int main()
{ 
	int nb = 32564;
	printf("\n%d", ft_puthexnbr(nb, 0, 1));
	printf("\nla vraie fonction : %x", nb);
}*/
