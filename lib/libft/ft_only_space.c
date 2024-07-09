/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_only_space.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbalazs <rbalazs@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 20:58:44 by rbalazs           #+#    #+#             */
/*   Updated: 2024/05/12 21:01:33 by rbalazs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool	ft_is_space(char c);

bool	ft_only_space(char **strs)

{
	int	i;
	int	j;

	i = 1;
	while (strs[i])
	{
		j = 0;
		while (strs[i][j])
		{
			if (!ft_is_space(strs[i][j]))
				return (false);
			j++;
		}
		i++;
	}
	return (true);
}

bool	ft_is_space(char c)
{
	return (c == '\f' || c == '\n' || c == '\r' || c == '\t' || c == '\v'
		|| c == 32);
}
