/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbalazs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 11:04:52 by rbalazs           #+#    #+#             */
/*   Updated: 2023/12/13 11:04:53 by rbalazs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dest1;
	unsigned char	*src1;
	unsigned int	i;

	dest1 = (unsigned char *)dest;
	src1 = (unsigned char *)src;
	i = 0;
	if (src == NULL && dest == NULL)
		return (NULL);
	while (i < n)
	{
		dest1[i] = src1[i];
		i++;
	}
	return (dest1);
}

/*
#include <stdio.h>
#include <stdlib.h>
int main()
{    
  int tab [] = { 54, 85, 20, 63, 21 };
  int len = sizeof( int ) * 5; 
  int *dest = (int *) malloc(len);

  ft_memcpy(dest, tab, len);

  for(len=0; len<5; len++)
       printf("%d", dest[len]);
  printf("\n");       
  free(dest);
}
*/
