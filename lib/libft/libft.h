/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 20:02:27 by nchairun          #+#    #+#             */
/*   Updated: 2025/02/05 20:32:11 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include "../ft_printf/ft_printf.h"
# include "../get_next_line/get_next_line.h"

# include <ctype.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <strings.h>
# include <unistd.h>
# include <stdlib.h>

// Libc functions: <ctype.h>
int		ft_isalpha(int i);
int		ft_isdigit(int i);
int		ft_isalnum(int i);
int		ft_isascii(int i);
int		ft_isprint(int i);
int		ft_toupper(int i);
int		ft_tolower(int i);

// Libc functions: <string.h>
size_t	ft_strlen(const char *str);
void	*ft_memset(void *ptr, int value, size_t num);
void	ft_bzero(void *ptr, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
size_t	ft_strlcpy(char *restrict dst, const char *restrict src,
			size_t dstsize);
size_t	ft_strlcat(char *restrict dst, const char *restrict src,
			size_t dstsize);
char	*ft_strchr(const char *ptr_string, int ptr_find);
char	*ft_strrchr(const char *ptr_string, int ptr_find);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memchr(const void *ptr_src, int ptr_find, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strdup(const char *s1);

// Libc functions: <stdlib.h>

int		ft_atoi(const char *str);
void	*ft_calloc(size_t count, size_t size);

// additional functions
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

#endif
