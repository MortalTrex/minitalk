/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbalazs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 11:03:51 by rbalazs           #+#    #+#             */
/*   Updated: 2023/12/13 11:03:52 by rbalazs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c > 'Z' && c < 'a') || c > 'z' || c < 'A')
		return (0);
	return (1);
}

/*
#include <stdio.h>
int main()
{
	printf("%d", ft_isalpha("tes34t"));
}*/
