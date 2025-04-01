/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_mlx.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 12:10:44 by nchairun          #+#    #+#             */
/*   Updated: 2025/01/26 12:54:03 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	start_render(t_game *game)
{
	game->mlx = mlx_init(game->map_x * TILE_SIZE, game->map_y * TILE_SIZE,
			"so_long", true);
	if (game->mlx == NULL)
	{
		free_2d(game->map);
		write(2, "ERROR\n", 6);
		exit(EXIT_FAILURE);
	}
	game->mlx_img = mlx_new_image(game->mlx, game->map_x * TILE_SIZE,
			game->map_y * TILE_SIZE);
	if (game->mlx_img == NULL)
	{
		mlx_close_window(game->mlx);
		free_2d(game->map);
		write(2, "ERROR\n", 6);
		exit(EXIT_FAILURE);
	}
	mlx_image_to_window(game->mlx, game->mlx_img, 0, 0);
	if (mlx_image_to_window(game->mlx, game->mlx_img, 0, 0) == -1)
	{
		mlx_close_window(game->mlx);
		free_2d(game->map);
		write(2, "ERROR\n", 6);
		exit(EXIT_FAILURE);
	}
}

void	read_textures(t_game *game)
{
	game->t_collectibles = mlx_load_png("textures/collectibles.png");
	game->t_empty = mlx_load_png("textures/empty.png");
	game->t_exit = mlx_load_png("textures/exit.png");
	game->t_player = mlx_load_png("textures/player.png");
	game->t_wall = mlx_load_png("textures/wall.png");
	if (!(game->t_empty || game->t_player || game->t_collectibles
			|| game->t_wall || game->t_exit))
	{
		free_2d(game->map);
		write(2, "ERROR\n", 6);
		exit(EXIT_FAILURE);
	}
}

void	read_mlx_to_image(t_game *game)
{
	game->img_empty = mlx_texture_to_image(game->mlx, game->t_empty);
	game->img_player = mlx_texture_to_image(game->mlx, game->t_player);
	game->img_collectibles = mlx_texture_to_image(game->mlx,
			game->t_collectibles);
	game->img_wall = mlx_texture_to_image(game->mlx, game->t_wall);
	game->img_exit = mlx_texture_to_image(game->mlx, game->t_exit);
	if (!(game->img_exit || game->img_player || game->img_collectibles
			|| game->img_wall || game->img_empty))
	{
		free_2d(game->map);
		write(2, "ERROR\n", 6);
		exit(EXIT_FAILURE);
	}
}
