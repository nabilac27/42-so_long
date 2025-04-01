/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_helper.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 17:49:07 by nchairun          #+#    #+#             */
/*   Updated: 2025/02/02 18:49:21 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	check_args_map(int argc, char **argv, t_game *game)
{
	if (argc != 2 || (!ft_strnstr((argv[1]), ".ber", ft_strlen(argv[1]))))
	{
		write(2, "ERROR: Invalid arguments\n", 25);
		exit(EXIT_FAILURE);
	}
	if (parse_map(game, argv[1]) == EXIT_FAILURE)
	{
		write(2, "ERROR: Parsing map failed\n", 26);
		exit(EXIT_FAILURE);
	}
}

void	game_render(t_game *game)
{
	start_render(game);
	read_textures(game);
	read_mlx_to_image(game);
	check_collect_exit(game);
}

void	check_collect_exit(t_game *game)
{
	dup_map(game);
	flood_fill(game, game->player_x, game->player_y, '!');
	free_2d(game->temp_map);
	if (!(game->collectibles_reachable && game->exit_reachable))
	{
		write(2, "ERROR: Parsing map failed\n", 26);
		exit(EXIT_FAILURE);
	}
}

void	game_loop(t_game *game)
{
	mlx_loop_hook(game->mlx, render_tile_img, game);
	mlx_key_hook(game->mlx, handle_key, game);
	mlx_set_setting(MLX_STRETCH_IMAGE, true);
	mlx_loop(game->mlx);
	mlx_terminate(game->mlx);
	if (game->mlx_img == NULL)
		free_2d(game->map);
}

void	free_2d(char **array)
{
	int	i;

	i = 0;
	if (array == NULL)
		return ;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
	array = NULL;
}
