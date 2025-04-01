# **so_long**
The **so_long** project is a 2D game created using the **MLX42** library,

where the player navigates through a map collecting items and reaching an exit. 

The game involves rendering, movement, and collision detection.

## **Key Concepts**

- **[MLX42 Library](https://github.com/codam-coding-college/MLX42)**: Used for rendering graphics, handling user input, and managing the game window.

- **Game Loop**: The loop updates the game state, renders graphics, and checks player input.

- **Map Parsing**: The map is read from a file and checked for walls, the player, the exit, and collectibles.

- **Player Movement**: The player moves using keyboard inputs, and the screen is updated accordingly.

- **Collectibles & Exit**: The player collects items, which unlock the exit when all items are gathered.

## **Functions Overview**

### **MLX Functions**

| Function                                | Description                                                                 |
|-----------------------------------------|-----------------------------------------------------------------------------|
| `start_render(t_game *game)`            | Initializes rendering with MLX and starts the game window.                   |
| `read_textures(t_game *game)`           | Loads textures for game elements (player, walls, etc.) into MLX.            |
| `read_mlx_to_image(t_game *game)`      | Converts loaded textures into MLX images for rendering.                      |
| `render_tile_img(void *param)`         | Renders a specific tile image to the game window.                            |
| `render_map(t_game *game)`             | Renders the entire game map using MLX images.                               |
| `render_tile(t_game *game, int x, int y)`| Renders an individual tile at the specified coordinates.                    |
| `tile_img_to_img(mlx_image_t *img, mlx_image_t *tile_img, int x, int y)` | Copies a tile image to the game window at the given coordinates.            |
| `pixel(mlx_image_t *img, uint32_t x, uint32_t y)` | Retrieves the pixel data at the specified coordinates in an image.          |

### **Non-MLX Functions**

| Function                                | Description                                                                 |
|-----------------------------------------|-----------------------------------------------------------------------------|
| `check_args_map(int argc, char **argv, t_game *game)` | Verifies the program arguments and initializes the game.                    |
| `game_render(t_game *game)`             | Updates and renders the game state (including player movement).             |
| `check_collect_exit(t_game *game)`      | Checks if all collectibles are gathered and if the exit is accessible.      |
| `game_loop(t_game *game)`               | The main game loop that runs continuously to update the game.               |
| `free_2d(char **array)`                | Frees a dynamically allocated 2D array used for map data.                   |
| `parse_map(t_game *game, char *map_name)` | Parses the game map from a file.                                           |
| `read_map(t_game *game, char *map_name)` | Reads the map from the specified file.                                      |
| `read_line(t_game *game, char *line, int i)` | Reads and processes a single line of the map.                               |
| `check_map(t_game *game)`               | Validates the map for correct formatting and contents.                      |
| `check_valid_map(t_game *game, char c, int y, int x)` | Checks individual map positions for validity.                               |
| `dup_map(t_game *game)`                 | Duplicates the map for processing.                                          |
| `flood_fill(t_game *game, int x, int y, char c)` | Ensures the player can reach all map areas by performing flood-fill.        |
| `handle_key(mlx_key_data_t keydata, void *param)` | Handles user keyboard input to move the player.                             |
| `move_key(t_game *game, int x, int y)`  | Moves the player on the map based on keyboard input.                        |
