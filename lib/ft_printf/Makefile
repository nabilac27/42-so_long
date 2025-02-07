# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/07 23:49:33 by nchairun          #+#    #+#              #
#    Updated: 2024/11/14 01:06:57 by nchairun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CFLAGS = cc -Wall -Wextra -Werror

AR = ar rcs

SRCS = ./ft_printf_digits.c	\
		./ft_printf_hex.c 	\
		./ft_printf_words.c	\
		./ft_printf.c 		\
		./main_function.c	\

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
		$(AR) $(NAME) $^

%.o: %.c
	$(CFLAGS) -c $< -o $@

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re