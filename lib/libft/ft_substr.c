/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbalazs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 11:09:26 by rbalazs           #+#    #+#             */
/*   Updated: 2023/12/13 11:09:28 by rbalazs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_test(size_t i, size_t j)
{
	if (i < j)
		return (i);
	else
		return (j);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;

	if (!s)
		return (NULL);
	if (start >= (unsigned int)ft_strlen(s))
		return (ft_calloc(1, 1));
	s = s + start;
	len = ft_test(len, ft_strlen(s));
	res = ft_calloc(1, len + 1);
	if (!res)
		return (NULL);
	res = ft_memcpy(res, s, len);
	return (res);
}

/*
char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i;
	char *res;
	int	slen;

	slen = strlen(s);
  if (!s)
    return(NULL);
	if (start >= slen)
		return (calloc(1, 1));
	if (len > slen)
		len = slen;
	res = calloc(1, len + 1);
  //res = (char *) malloc(sizeof(char) * (len + 1));
  if (!res)
    return(NULL);
  i = 0;
  while(i < len)
  {
    res[i] = s[start];
    i++;
    start++;
  }
  res[i] = '\0';

	res = memcpy(res, s, len);
  return (res);
}

int main()
{
  printf("%s", ft_substr("sssaaalut", 42, 42000000));
}
*/
