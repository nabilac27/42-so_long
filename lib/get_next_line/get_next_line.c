/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 05:39:16 by nchairun          #+#    #+#             */
/*   Updated: 2025/02/05 20:31:27 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE + 1];
	char		*line;
	char		*store_line;
	int			len_line;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (clear_buffer(buffer), NULL);
	if (ft_strchr_gnl(buffer, '\n') != 0)
		next_line(buffer);
	store_line = read_into_buffer(buffer, fd);
	if (store_line == NULL)
		return (clear_buffer(buffer), NULL);
	if (ft_strlen_gnl(store_line) == 0)
		return (free(store_line), NULL);
	len_line = ft_strlen_gnl(store_line)
		- ft_strlen_gnl(ft_strchr_gnl(store_line, '\n'));
	if (ft_strchr_gnl(store_line, '\n') != NULL)
		len_line += 1;
	line = malloc((len_line + 1) * sizeof(char));
	if (line == NULL)
		return (clear_buffer(buffer), free(store_line), NULL);
	ft_strlcpy_gnl(line, store_line, len_line + 1);
	return (free(store_line), line);
}

char	*read_into_buffer(char buffer[], int fd)
{
	int		bytes_read;
	char	*store_line;

	store_line = NULL;
	store_line = ft_strjoin_free(store_line, buffer);
	if (store_line == NULL)
		return (clear_buffer(buffer), NULL);
	while (ft_strchr_gnl(buffer, '\n') == 0)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read < 0)
			return (NULL);
		buffer[bytes_read] = '\0';
		if (bytes_read == 0)
		{
			clear_buffer(buffer);
			break ;
		}
		store_line = ft_strjoin_free(store_line, buffer);
		if (store_line == NULL)
			return (clear_buffer(buffer), NULL);
	}
	return (store_line);
}

void	next_line(char buffer[])
{
	char	*ptr_next_line;
	int		i;

	ptr_next_line = ft_strchr_gnl(buffer, '\n');
	if (ptr_next_line != NULL)
	{
		i = 0;
		ptr_next_line++;
		while (ptr_next_line[i] != '\0')
		{
			buffer[i] = ptr_next_line[i];
			i++;
		}
		buffer[i] = '\0';
	}
	else
		clear_buffer(buffer);
}

void	clear_buffer(char buffer[])
{
	int	i;

	i = 0;
	while (i < BUFFER_SIZE)
		buffer[i++] = '\0';
}

// // /*
// // 	TEST FUNCTION
// // */
// int	main(void)
// {
// 	char	*line;
// 	int		i;
// 	int		fd;
// 	int		fd2;

// 	i = 0;
// 	fd = open("./abc.txt", O_RDONLY);
// 	printf("%d/n", fd);
// 	close(fd);
// 	fd2 = open("./def.txt", O_RDONLY);
// 	printf("%d/n", fd2);

// 	close(fd2);
// 	return (0);
// }
