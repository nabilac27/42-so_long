/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 03:20:27 by nchairun          #+#    #+#             */
/*   Updated: 2025/01/27 22:52:03 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin_gnl(char *s1, char *s2)
{
	char	*str;

	str = (char *)malloc(ft_strlen_gnl(s1) + ft_strlen_gnl(s2) + 1);
	if (str == NULL)
		return (NULL);
	ft_strlcpy_gnl(str, s1, (ft_strlen_gnl(s1) + 1));
	ft_strlcpy_gnl((str + ft_strlen_gnl(s1)), (s2), (ft_strlen_gnl(s2) + 1));
	return (str);
}

char	*ft_strjoin_free(char *s1, char *s2)
{
	char	*temp;

	temp = ft_strjoin_gnl(s1, s2);
	free(s1);
	return (temp);
}

char	*ft_strchr_gnl(const char *str, int chr)
{
	int		i;
	char	char_chr;

	i = 0;
	char_chr = (char)chr;
	while (str && str[i] != '\0')
	{
		if (str[i] == char_chr)
			return ((char *)&str[i]);
		i++;
	}
	if (char_chr == '\0')
		return ((char *)&str[i]);
	return (0);
}

int	ft_strlen_gnl(const char *str)
{
	int	i;

	i = 0;
	while (str && str[i] != '\0')
		i++;
	return (i);
}

int	ft_strlcpy_gnl(char *dst, const char *src, int dstsize)
{
	int	i;

	if (dstsize == 0)
		return (ft_strlen_gnl(src));
	i = 0;
	while (dst && src && src[i] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	if (dst && dstsize > 0)
		dst[i] = '\0';
	return (ft_strlen_gnl(src));
}
