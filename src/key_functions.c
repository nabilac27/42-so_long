/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_functions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 13:27:42 by nchairun          #+#    #+#             */
/*   Updated: 2025/02/06 04:58:22 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	handle_key(mlx_key_data_t keydata, void *param)
{
	t_game	*game;

	game = (t_game *)param;
	if (keydata.key == MLX_KEY_ESCAPE && keydata.action == MLX_PRESS)
	{
		mlx_close_window(game->mlx);
	}
	if (keydata.action == MLX_PRESS || keydata.action == MLX_REPEAT)
	{
		if (keydata.key == MLX_KEY_W || keydata.key == MLX_KEY_UP)
			move_key(game, game->player_x, game->player_y - 1);
		else if (keydata.key == MLX_KEY_S || keydata.key == MLX_KEY_DOWN)
			move_key(game, game->player_x, game->player_y + 1);
		else if (keydata.key == MLX_KEY_A || keydata.key == MLX_KEY_LEFT)
			move_key(game, game->player_x - 1, game->player_y);
		else if (keydata.key == MLX_KEY_D || keydata.key == MLX_KEY_RIGHT)
			move_key(game, game->player_x + 1, game->player_y);
	}
}

void	move_key(t_game *game, int x, int y)
{
	if (game->map[y][x] != WALL)
	{
		if (game->map[y][x] == COLLECTIBLE)
		{
			game->count_collectibles--;
			game->map[y][x] = EMPTY;
		}
		game->player_x = x;
		game->player_y = y;
		game->count_steps++;
		ft_printf("%d\n", game->count_steps);
	}
	if (game->map[y][x] == EXIT && (game->count_collectibles == 0))
	{
		game->map = NULL;
		mlx_close_window(game->mlx);
	}
}
