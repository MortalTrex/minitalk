/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbalazs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 11:09:07 by rbalazs           #+#    #+#             */
/*   Updated: 2023/12/13 11:09:08 by rbalazs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*res;

	if (!s)
		return (NULL);
	if (!f)
		return (NULL);
	res = ft_strdup(s);
	if (res == NULL)
		return (NULL);
	i = 0;
	while (res[i])
	{
		res[i] = (*f)(i, res[i]);
		i++;
	}
	return (res);
}

/*
char ft_test(unsigned int nb, char c)
{
  return(c + nb);
}

#include <stdio.h>
int main()
{
  char s[] = "Salut ceci est un test";
  char *res = ft_strmapi(s, ft_test);
  if(res != NULL)
  {
    printf("%s", res);
    free(res);
  }
  return 0;
}
*/
