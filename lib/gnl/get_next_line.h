/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbalazs <rbalazs@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 18:21:49 by rbalazs           #+#    #+#             */
/*   Updated: 2024/07/03 17:52:53 by rbalazs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <unistd.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*get_next_line(int fd);
int		gnl_strlen(const char *str);
bool	ft_ischr(const char *str, int c);
char	*gnl_strjoin(char *s1, const char *s2);
char	*gnl_strdup(const char *s1);
char	*ft_assembleline(char *tmp);
char	*ft_createtmp(int fd, char *buffer, char *tmp);
char	*gnl_strcpy(char *dest, const char *src);

#endif
