/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 06:46:26 by nchairun          #+#    #+#             */
/*   Updated: 2025/02/06 02:52:27 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H

# define SO_LONG_H

# include "../lib/MLX42/include/MLX42/MLX42.h"
# include "../lib/libft/libft.h"
# include <fcntl.h>
# include <memory.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

# define MAX_HEIGHT 20
# define TILE_SIZE 71

# define PLAYER 'P'
# define COLLECTIBLE 'C'
# define EXIT 'E'
# define WALL '1'
# define EMPTY '0'

/* ---------------------- */

typedef struct s_game
{
	char			**map;
	char			**temp_map;
	mlx_t			*mlx;

	mlx_texture_t	*t_empty;
	mlx_texture_t	*t_player;
	mlx_texture_t	*t_collectibles;
	mlx_texture_t	*t_wall;
	mlx_texture_t	*t_exit;

	mlx_image_t		*img_player;
	mlx_image_t		*img_exit;
	mlx_image_t		*img_wall;
	mlx_image_t		*img_collectibles;
	mlx_image_t		*img_empty;
	mlx_image_t		*mlx_img;

	int				map_x;
	int				map_y;

	int				player_x;
	int				player_y;

	int				count_collectibles;
	int				counter_collectibles;
	int				count_exit;
	int				count_player;
	int				count_steps;

	bool			collectibles_reachable;
	bool			exit_reachable;
}					t_game;

/* ---------------------- */

// main_helper.c
void				check_args_map(int argc, char **argv, t_game *game);
void				game_render(t_game *game);
void				check_collect_exit(t_game *game);
void				game_loop(t_game *game);

// handle_error.c */
void				free_2d(char **array);

// parse_map.c
int					parse_map(t_game *game, char *map_name);
bool				read_map(t_game *game, char *map_name);
bool				read_line(t_game *game, char *line, int i);
bool				check_map(t_game *game);
bool				check_valid_map(t_game *game, char c, int y, int x);

// render_mlx.c
void				start_render(t_game *game);
void				read_textures(t_game *game);
void				read_mlx_to_image(t_game *game);

// handle_map.c
void				dup_map(t_game *game);
void				flood_fill(t_game *game, int x, int y, char c);

// render_img.c
void				render_tile_img(void *param);
void				render_map(t_game *game);
void				render_tile(t_game *game, int x, int y);
void				tile_img_to_img(mlx_image_t *img, mlx_image_t *tile_img,
						int x, int y);
int					pixel(mlx_image_t *img, uint32_t x, uint32_t y);

// key_functions.c
void				handle_key(mlx_key_data_t keydata, void *param);
void				move_key(t_game *game, int x, int y);

#endif