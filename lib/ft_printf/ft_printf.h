/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbalazs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 21:32:16 by rbalazs           #+#    #+#             */
/*   Updated: 2024/01/05 21:32:19 by rbalazs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>
# include <ctype.h>
# include <stdlib.h>

int	ft_putptr(void *ptr);
int	ft_putstr(char *str);
int	ft_printf(const char *str, ...);
int	ft_putnbr(int nb, int count);
int	ft_putunsignednbr(unsigned int nb, int count);
int	ft_putchar(int c);
int	ft_puthexnbr(unsigned long nb, int minmaj, int count);
int	ft_verif(char chr, int count, va_list args);

#endif
