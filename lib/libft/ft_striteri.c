/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbalazs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:45:10 by rbalazs           #+#    #+#             */
/*   Updated: 2023/11/20 11:45:48 by rbalazs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	if (s)
	{
		while (s[i])
		{
			(*f)(i, &s[i]);
			i++;
		}
	}
}

/*
void ft_test(unsigned int nb, char *c)
{
  *c = *c + nb;
}

int main()
{
  char s[] = "Salut";
  ft_striteri(s, ft_test);

  printf("%s", s);
  return 0;
}
*/
