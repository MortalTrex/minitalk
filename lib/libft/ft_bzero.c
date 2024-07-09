/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbalazs <rbalazs@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 11:03:18 by rbalazs           #+#    #+#             */
/*   Updated: 2024/06/21 14:59:02 by rbalazs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	size_t			i;
	unsigned char	*chaine;

	i = 0;
	chaine = str;
	while (i < n)
	{
		chaine[i] = 0;
		i++;
	}
}

/*
#include <stdio.h>

int	main(void)
{
	int		n;
	char	chaine[n];
  char machaine[n];

  n = 6;
  for (int i = 0; i < n; i++)
		printf("Valeur à l'indice %d : %d\n", i, chaine[i]);
  printf("\033[1;31mAvec la fonction bzero :\033[0m\n");
	bzero(chaine, n);
  for (int i = 0; i < n; i++)
		printf("Valeur à l'indice %d : %d\n", i, chaine[i]);
  printf("\033[1;34m\nNouvelle chaine :\033[0m\n");
  for (int i = 0; i < n; i++)
		printf("Valeur à l'indice %d : %d\n", i, machaine[i]);
  printf("\033[1;34mAvec ma fonction :\033[0m\n");
	ft_bzero(machaine, n);
  for (int i = 0; i < n; i++)
		printf("Valeur à l'indice %d : %d\n", i, machaine[i]);
}
*/
