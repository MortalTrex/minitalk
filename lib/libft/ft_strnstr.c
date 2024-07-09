/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbalazs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 11:06:40 by rbalazs           #+#    #+#             */
/*   Updated: 2023/12/13 11:06:41 by rbalazs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *large, const char *small, size_t len)
{
	size_t	i;
	size_t	y;

	i = 0;
	y = 0;
	if (*small == 0)
		return ((char *)large);
	if (large == small)
		return ((char *)large);
	if (len == 0)
		return (NULL);
	while (large[i] && i < len)
	{
		while (small[y] && i + y < len && large[i + y] == small[y])
			y++;
		if (small[y] == '\0')
			return ((char *)&large[i]);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
int main()
{ 
  const char *largestring = "Foo Bar Baz";
  const char *smallstring = "Bar";
  char *ptr;

  ptr = ft_strnstr(largestring, smallstring, 4);
  printf("%s", ptr);
}
*/
