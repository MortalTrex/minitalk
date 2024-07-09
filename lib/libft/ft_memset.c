/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbalazs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 11:05:16 by rbalazs           #+#    #+#             */
/*   Updated: 2023/12/13 11:05:32 by rbalazs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	unsigned int	i;
	unsigned int	valuec;
	unsigned char	*p;

	p = str;
	valuec = c;
	i = 0;
	while (i < len)
	{
		p[i] = valuec;
		i++;
	}
	return (str);
}

/*
#include <stdlib.h>
#include <string.h>

int main() { 
    int tab[] = { 54, 85, 20, 63, 21 };
    size_t size = sizeof(int) * 5;
    int i;

    printf("\033[1;31mAvec la vraie fonction:\033[0m\n");
    for (i = 0; i < 5; i++)
        printf ("%d", tab[i]);
    printf ("\n");

    memset(tab, 0, size);

    for (i = 0; i < 5; i++)
        printf("%d", tab[i]);
    printf ("\n");


    int tab2[] = { 54, 85, 20, 63, 21 };

    printf("\033[1;32mAvec ma fonction:\033[0m\n");
    for (i = 0; i < 5; i++)
      printf("%d", tab2[i]);
    printf("\n");
 
    ft_memset(tab2, 0, size);

    for (i = 0; i < 5; i++)
      printf("%d", tab2[i]);
    printf("\n");
    return 0;
}
*/
