/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbalazs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 19:23:43 by rbalazs           #+#    #+#             */
/*   Updated: 2024/02/04 19:23:47 by rbalazs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

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
# ifndef FD_MAX
#  define FD_MAX 1024
# endif

char		*get_next_line(int fd);
int			gft_strlen(const char *str);
bool		ft_ischr(const char *str, int c);
char		*gft_strjoin(char *s1, const char *s2);
char		*gft_strdup(const char *s1);
char		*ft_assembleline(char *tmp);
char		*ft_createtmp(int fd, char *buffer, char *tmp);

#endif
