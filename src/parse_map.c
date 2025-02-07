/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 09:09:02 by nchairun          #+#    #+#             */
/*   Updated: 2025/02/07 16:07:59 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	parse_map(t_game *game, char *map_name)
{
	game->map = (char **)ft_calloc(MAX_HEIGHT, sizeof(char *));
	if (game->map == NULL)
	{
		free_2d(game->map);
		return (1);
	}
	if (read_map(game, map_name) == false)
		return (1);
	if (check_map(game) == false)
		return (1);
	return (0);
}

bool	read_map(t_game *game, char *map_name)
{
	int		fd;
	int		i;
	char	*line;
	char	*cutted_line;

	i = 0;
	fd = open(map_name, O_RDONLY);
	if (fd < 0)
		return (false);
	line = get_next_line(fd);
	while (line != NULL)
	{
		cutted_line = ft_strtrim(line, "\n");
		free(line);
		line = cutted_line;
		if (read_line(game, line, i) == 0)
			return (false);
		free(line);
		i++;
		line = get_next_line(fd);
	}
	close(fd);
	game->map_y = i;
	return (true);
}

bool	read_line(t_game *game, char *line, int i)
{
	int	len_x;

	if (i > MAX_HEIGHT)
		return (0);
	len_x = ft_strlen(line);
	if (i == 0)
		game->map_x = len_x;
	else if (game->map_x != len_x)
	{
		write(2, "length is not consistent\n", 25);
		return (0);
	}
	game->map[i] = ft_strdup(line);
	if (!game->map)
		return (0);
	return (1);
}

bool	check_map(t_game *game)
{
	int	x;
	int	y;

	y = 0;
	while (y < game->map_y)
	{
		x = 0;
		while (x < game->map_x)
		{
			if (x == 0 || x == game->map_x - 1 || y == 0 || y == game->map_y
				- 1)
				if (game->map[y][x] != WALL)
					return (false);
			if (!(check_valid_map(game, game->map[y][x], y, x)))
				return (false);
			x++;
		}
		y++;
	}
	if (game->count_player != 1 || game->count_exit != 1
		|| game->count_collectibles < 1)
		return (false);
	return (true);
}

bool	check_valid_map(t_game *game, char c, int y, int x)
{
	if (c == EXIT)
		game->count_exit++;
	else if (c == COLLECTIBLE)
		game->count_collectibles++;
	else if (c == PLAYER)
	{
		game->count_player++;
		game->player_x = x;
		game->player_y = y;
	}
	else if (!(c == WALL || c == EMPTY))
		return (false);
	return (true);
}
