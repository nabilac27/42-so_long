# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/24 06:44:32 by nchairun          #+#    #+#              #
#    Updated: 2025/02/06 05:10:33 by nchairun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	  := so_long
CC 		  := gcc

FLAGS 	  := -Wall -Wextra -Werror

LIBFT_DIR := ./lib/libft
LIBFT 	  := $(LIBFT_DIR)/libft.a

MLX_DIR   := lib/MLX42
MLX       := $(MLX_DIR)/build/libmlx42.a

MLX42FLAGS:= -lglfw -framework Cocoa -framework OpenGL -framework IOKit -fsanitize=address -g

SRCS 	  := $(shell find ./src -iname "*.c")
OBJECTS   := ${SRCS:.c=.o}

all: $(NAME)

$(LIBFT):
	@make -C $(LIBFT_DIR)
    
$(MLX):
	@if [ ! -d "$(MLX_DIR)" ]; then \
		git clone https://github.com/codam-coding-college/MLX42.git $(MLX_DIR); \
	fi
	@cd $(MLX_DIR) && cmake -B build && cmake --build build -j4
    
$(NAME): $(MLX) $(OBJECTS) $(LIBFT)
	$(CC) $(FLAGS) $(OBJECTS) -o $(NAME) $(LIBFT) $(MLX) $(MLX42FLAGS) -lm -g
    
%.o: %.c includes/so_long.h
	$(CC) $(FLAGS) -I includes -I $(MLX_DIR)/include -I$(LIBFT_DIR) -c $< -o $@
    
clean:
	rm -rf $(OBJECTS)
	@make -C $(LIBFT_DIR) clean

fclean: clean
	rm -rf $(NAME)
	# rm -rf $(MLX_DIR)
	@make -C $(LIBFT_DIR) fclean
    
re: fclean all

.PHONY: all clean fclean re