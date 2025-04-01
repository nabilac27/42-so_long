/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 12:46:13 by nchairun          #+#    #+#             */
/*   Updated: 2025/02/02 17:57:26 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	dup_map(t_game *game)
{
	int	y;
	int	i;

	i = 0;
	y = game->map_y;
	game->temp_map = (char **)malloc(sizeof(char *) * (y + 1));
	if (!(game->temp_map))
	{
		free_2d(game->map);
		exit(1);
	}
	while (i < game->map_y)
	{
		game->temp_map[i] = (char *)ft_calloc(game->map_x + 1, sizeof(char));
		if (!game->temp_map[i])
		{
			free_2d(game->map);
			free_2d(game->temp_map);
			exit(1);
		}
		ft_strlcpy(game->temp_map[i], game->map[i], game->map_x + 1);
		i++;
	}
	game->temp_map[i] = NULL;
	game->counter_collectibles = game->count_collectibles;
}

void	flood_fill(t_game *game, int x, int y, char c)
{
	if (game->temp_map[y][x] == WALL || game->temp_map[y][x] == c)
		return ;
	if (game->temp_map[y][x] == EXIT)
		game->exit_reachable = true;
	if (game->temp_map[y][x] == COLLECTIBLE)
	{
		game->counter_collectibles--;
		if (game->counter_collectibles == 0)
			game->collectibles_reachable = true;
	}
	game->temp_map[y][x] = c;
	flood_fill(game, x - 1, y, c);
	flood_fill(game, x + 1, y, c);
	flood_fill(game, x, y - 1, c);
	flood_fill(game, x, y + 1, c);
}
