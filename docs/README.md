# **so_long**
The **so_long** project is a 2D game created using the **[MLX42 Library](https://github.com/codam-coding-college/MLX42)** library,

where the player navigates through a map collecting items and reaching an exit. 

The game involves rendering, movement, and collision detection.

## **Key Concepts**

- **[MLX42 Library](https://github.com/codam-coding-college/MLX42)**: Used for rendering graphics, handling user input, and managing the game window.

- **Game Loop**: The loop updates the game state, renders graphics, and checks player input.

- **Map Parsing**: The map is read from a file and checked for walls, the player, the exit, and collectibles.

- **Player Movement**: The player moves using keyboard inputs, and the screen is updated accordingly.

- **Collectibles & Exit**: The player collects items, which unlock the exit when all items are gathered.


## How to Run

To run the project, follow these steps:

1. Compile the program: `make`.
   ```bash
    $ make
    ```
2.  run the game, use the following format: `./so_long map.ber`.
    ```bash
    $ ./so_long map.ber
    ```
3. Rebuild the Project: `make re`.
    ```bash
    $ make re
    ```

---
   

## **Functions Overview**

| **Function**                            | **Description** |
|-----------------------------------------|-----------------|
| `check_args_map(int argc, char **argv, t_game *game)` | Validates the arguments passed to the program and prepares the game. |
| `game_render(t_game *game)`             | Renders the game elements to the screen. |
| `check_collect_exit(t_game *game)`      | Checks if all collectibles are collected and the exit can be accessed. |
| `game_loop(t_game *game)`               | Main loop of the game that handles game events and updates. |
| `free_2d(char **array)`                 | Frees a 2D array used for map storage. |
| `parse_map(t_game *game, char *map_name)` | Parses the map file to extract the layout. |
| `read_map(t_game *game, char *map_name)` | Reads the map file into the game structure. |
| `read_line(t_game *game, char *line, int i)` | Reads a single line from the map file. |
| `check_map(t_game *game)`               | Validates the parsed map to ensure it's correct. |
| `check_valid_map(t_game *game, char c, int y, int x)` | Checks if the map contains valid characters. |
| `start_render(t_game *game)`            | Starts the rendering process for the game window. |
| `read_textures(t_game *game)`           | Loads textures needed for the game environment. |
| `read_mlx_to_image(t_game *game)`      | Converts loaded textures into images that can be displayed. |
| `dup_map(t_game *game)`                 | Duplicates the map for internal processing. |
| `flood_fill(t_game *game, int x, int y, char c)` | Ensures there are no unreachable areas in the map. |
| `render_tile_img(void *param)`          | Renders a tile's image to the screen. |
| `render_map(t_game *game)`              | Renders the entire map to the screen. |
| `render_tile(t_game *game, int x, int y)` | Renders a specific tile at coordinates (x, y). |
| `tile_img_to_img(mlx_image_t *img, mlx_image_t *tile_img, int x, int y)` | Converts tile images into a format for the game window. |
| `pixel(mlx_image_t *img, uint32_t x, uint32_t y)` | Retrieves the pixel at coordinates (x, y) in the image. |
| `handle_key(mlx_key_data_t keydata, void *param)` | Handles key press events for player movement. |
| `move_key(t_game *game, int x, int y)`  | Moves the player to a new position based on key input. |




## **MLX42 Functions Overview**

| **Step**                   | **Function**                | **Description**                                                                 |
|----------------------------|-----------------------------|---------------------------------------------------------------------------------|
| **Initialization**       | `mlx_init`                  | Initializes the MLX window with the specified size and window name.             |
| **Image Creation**       | `mlx_new_image`             | Creates a new image with the specified width and height.                        |
| **Game Loop & Input**    | `mlx_loop_hook`             | Registers a function to be called every time the game loop runs.                |
|                            | `mlx_key_hook`              | Registers a function to handle keyboard input during the game loop.             |
| **Settings**             | `mlx_set_setting`           | Enables or disables image stretching for window rendering.                      |
| **Event Loop**           | `mlx_loop`                  | Starts the MLX event loop, rendering the window and handling events.            |
| **Termination & Cleanup**| `mlx_terminate`             | Terminates the MLX library and frees associated resources.                      |
|                            | `mlx_close_window`          | Closes the MLX window.                                                         |
| **Image and Pixel Handling** | `mlx_put_pixel`          | Places a pixel with the specified color at coordinates in the image.            |
|                            | `mlx_image_to_window`       | Renders the image to the game window at position (0, 0).                        |
|                            | `mlx_load_png`              | Loads a PNG texture from the specified path.                                    |
|                            | `mlx_texture_to_image`      | Converts the texture into an image that can be rendered by MLX.                 |
| **Key Data Structure**      | `mlx_key_data_t`            | Data structure used for key event handling, containing key code and state.     |
