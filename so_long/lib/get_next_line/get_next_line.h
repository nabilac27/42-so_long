/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 01:50:32 by nchairun          #+#    #+#             */
/*   Updated: 2025/02/05 20:31:39 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

// get_next_line.c
char	*get_next_line(int fd);
char	*read_into_buffer(char *buffer, int fd);
void	next_line(char buffer[]);
void	clear_buffer(char buffer[]);

// get_next_line_utils.c
char	*ft_strjoin_gnl(char *s1, char *s2);
char	*ft_strjoin_free(char *s1, char *s2);

char	*ft_strchr_gnl(const char *ptr_string, int ptr_find);
int		ft_strlen_gnl(const char *str);
int		ft_strlcpy_gnl(char *dst, const char *src, int dstsize);

#endif
