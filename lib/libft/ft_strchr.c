/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbalazs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 11:05:40 by rbalazs           #+#    #+#             */
/*   Updated: 2023/12/13 11:05:41 by rbalazs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i++;
	}
	if (str[i] == (char)c)
		return ((char *)&str[i]);
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>
int main()
{
	char str[] = "salut";
  
	int schar = 'l';
	printf("%s\n", ft_strchr(str, schar));
	printf("vraie fonction : %s\n", strchr(str, schar));
	printf("vraie fonction : %p\n", strchr(str, schar));
	printf("vraie fonction : %p\n", ft_strchr(str, schar));
}
*/
