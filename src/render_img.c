/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_img.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 17:13:36 by nchairun          #+#    #+#             */
/*   Updated: 2025/02/02 17:13:39 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	render_tile_img(void *param)
{
	t_game	*game;

	game = param;
	render_map(game);
	tile_img_to_img(game->mlx_img, game->img_player, game->player_x,
		game->player_y);
}

void	render_map(t_game *game)
{
	int	x;
	int	y;

	y = 0;
	while (y < game->map_y)
	{
		x = 0;
		while (x < game->map_x)
		{
			render_tile(game, x, y);
			x++;
		}
		y++;
	}
}

void	render_tile(t_game *game, int x, int y)
{
	char		tile;
	mlx_image_t	*tile_img;

	tile_img = NULL;
	tile = game->map[y][x];
	tile_img_to_img(game->mlx_img, game->img_empty, x, y);
	if (tile == WALL)
		tile_img = game->img_wall;
	else if (tile == COLLECTIBLE)
		tile_img = game->img_collectibles;
	else if (tile == EXIT)
		tile_img = game->img_exit;
	else if (tile == EMPTY || tile == PLAYER)
		tile_img = game->img_empty;
	tile_img_to_img(game->mlx_img, tile_img, x, y);
}

void	tile_img_to_img(mlx_image_t *img, mlx_image_t *tile_img, int x, int y)
{
	uint32_t	i;
	uint32_t	j;
	int			color;

	x *= TILE_SIZE;
	y *= TILE_SIZE;
	i = 0;
	while (i < tile_img->height)
	{
		j = 0;
		while (j < tile_img->width)
		{
			color = pixel(tile_img, j, i);
			if (color != -1)
				mlx_put_pixel(img, x + j, y + i, color);
			j++;
		}
		i++;
	}
}

int	pixel(mlx_image_t *img, uint32_t x, uint32_t y)
{
	int		r;
	int		g;
	int		b;
	int		a;
	uint8_t	*pixel;

	if (x > img->width || y > img->height)
		return (0xFF000000);
	pixel = img->pixels + (y * img->width + x) * sizeof(uint32_t);
	r = pixel[0];
	g = pixel[1];
	b = pixel[2];
	a = pixel[3];
	if (a == 0)
		return (-1);
	return (r << 24 | g << 16 | b << 8 | a);
}
