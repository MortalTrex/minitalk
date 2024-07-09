/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbalazs <rbalazs@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 18:21:42 by rbalazs           #+#    #+#             */
/*   Updated: 2024/07/06 21:24:42 by rbalazs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_createtmp(int fd, char *buffer, char *tmp)
{
	int		cursor;
	char	*new_tmp;

	cursor = read(fd, buffer, BUFFER_SIZE);
	if (cursor <= 0)
	{
		if (cursor == 0 && tmp != NULL && *tmp != '\0')
			return (tmp);
		return (free(tmp), NULL);
	}
	buffer[cursor] = '\0';
	new_tmp = gnl_strjoin(tmp, buffer);
	if (!new_tmp)
		return (free(tmp), NULL);
	if (ft_ischr(new_tmp, '\n') == true)
		return (new_tmp);
	return (ft_createtmp(fd, buffer, new_tmp));
}

char	*ft_assembleline(char *tmp)
{
	char	*line;
	int		i;

	i = 0;
	while (tmp[i] != '\n' && tmp[i] != '\0')
		i++;
	if (tmp[i] == '\n')
		i++;
	line = malloc(sizeof(char) * (i + 1));
	if (!line)
	{
		free(line);
		return (NULL);
	}
	i = 0;
	while (tmp[i] != '\n' && tmp[i] != '\0')
	{
		line[i] = tmp[i];
		i++;
	}
	if (tmp[i] == '\n')
		line[i++] = '\n';
	line[i] = '\0';
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*tmp;
	char		*buffer;
	char		*line;
	char		*new_tmp;

	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (fd < 0 || BUFFER_SIZE <= 0 || !buffer)
		return (NULL);
	tmp = ft_createtmp(fd, buffer, tmp);
	free(buffer);
	if (!tmp)
		return (NULL);
	line = ft_assembleline(tmp);
	new_tmp = malloc(sizeof(char) * (gnl_strlen(tmp) - gnl_strlen(line) + 1));
	if (!new_tmp)
		return (free(tmp), NULL);
	gnl_strcpy(new_tmp, tmp + gnl_strlen(line));
	free(tmp);
	tmp = new_tmp;
	if (tmp[0] == '\0')
	{
		free(tmp);
		tmp = NULL;
	}
	return (line);
}

/*
int	main(void)
{
	int		fd;
	char	*line;
	int		i;

	fd = open("test.md", O_RDONLY);
	if (fd == -1)
	{
		perror("Error opening file");
		return (1);
	}
	i = 0;
	line = get_next_line(fd);
	free(line);
	while (line)
	{
		line = get_next_line(fd);
		if (!line)
			break ;
		printf("%s", line);
		free(line);
		i++;
	}
	close(fd);
	return (0);
}
*/
