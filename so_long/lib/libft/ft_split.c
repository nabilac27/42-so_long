/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:23:44 by nchairun          #+#    #+#             */
/*   Updated: 2025/01/27 22:45:41 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	splits a string using a char as parameter
	s: The string to be split
	c: The delimiter character
*/

#include "libft.h"

static void	free_str(char **str);
static int	count_str(char const *str, char c);
static int	split_str(char const *str, char c, char **result, int i);

char	**ft_split(char const *s, char c)
{
	char	**result;

	result = (char **)malloc((count_str(s, c) + 1) * sizeof(char *));
	if (!result)
		return (0);
	if ((split_str(s, c, result, 0)) == -1)
		return (0);
	return (result);
}

static int	count_str(char const *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			count++;
			while (str[i] && str[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

static int	split_str(char const *str, char c, char **result, int i)
{
	int	len;

	while (*str)
	{
		if (*str == c)
			str++;
		else
		{
			len = 0;
			while (*str != c && *str)
			{
				str++;
				len++;
			}
			result[i] = (char *)malloc(len + 1);
			if (!result[i])
			{
				free_str(result);
				return (-1);
			}
			ft_strlcpy((char *)result[i++], (char *)str - len, len + 1);
		}
	}
	result[i] = 0;
	return (1);
}

static void	free_str(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		free(str[i++]);
	free(str);
}

// int	main(void)
// {
// 	char **str = ft_split("xx12xx34xx56", 'x');
// 	int i = 0;
// 	while (str[i] != 0)
// 	{
// 		printf("%s\n", str[i]);
// 		i++;
// 	}
// 	free_str(str);

// 	return (0);
// }