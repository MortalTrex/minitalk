/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbalazs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 19:14:31 by rbalazs           #+#    #+#             */
/*   Updated: 2024/01/05 19:14:33 by rbalazs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdint.h>

int	ft_putptr(void *ptr)
{
	int	count;

	count = 0;
	if (ptr == NULL)
	{
		ft_putstr("(nil)");
		return (5);
	}
	count += ft_putstr("0x");
	count += ft_puthexnbr((uintptr_t)ptr, 0, 1);
	return (count);
}

/*
int main()
{
	char nombre = 'c';

	ft_putptr(&nombre);
	printf("\n%p", &nombre);
}
*/
