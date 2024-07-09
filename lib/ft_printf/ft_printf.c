/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbalazs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 19:13:49 by rbalazs           #+#    #+#             */
/*   Updated: 2024/01/05 19:57:04 by rbalazs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_verif(char chr, int count, va_list args)
{
	if (chr == 'c')
		count += ft_putchar(va_arg(args, int));
	if (chr == 's')
		count += ft_putstr(va_arg(args, char *));
	if (chr == 'p')
		count += ft_putptr(va_arg(args, char *));
	if (chr == 'd' || chr == 'i')
		count += ft_putnbr(va_arg(args, int), 1);
	if (chr == 'u')
		count += ft_putunsignednbr(va_arg(args, unsigned int), 1);
	if (chr == 'x')
		count += ft_puthexnbr(va_arg(args, unsigned int), 0, 1);
	if (chr == 'X')
		count += ft_puthexnbr(va_arg(args, unsigned int), 1, 1);
	if (chr == '%')
	{
		write(1, "%", 1);
		count++;
	}
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		count;

	va_start(args, str);
	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			count = ft_verif(str[i + 1], count, args);
			i++;
		}
		else if (str[i] != '%')
		{
			write(1, &str[i], 1);
			count++;
		}
		i++;
	}
	va_end (args);
	return (count);
}

/*
int main ()
{
  //const char str = "Salut";
	char nb = '4';
	printf("%d\n", ft_printf("%p\n", &nb));
	printf("%d", printf("%p\n", &nb));
}
*/
