# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/27 22:44:27 by nchairun          #+#    #+#              #
#    Updated: 2025/02/05 22:23:22 by nchairun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

AR = ar rcs

SRCS =	./ft_isalpha.c	./ft_isdigit.c	./ft_isalnum.c	./ft_isascii.c	./ft_isprint.c	./ft_strlen.c	\
		./ft_toupper.c	./ft_tolower.c	./ft_memset.c	./ft_bzero.c	./ft_memcpy.c	./ft_strchr.c	\
		./ft_strrchr.c	./ft_strncmp.c	./ft_memchr.c	./ft_memcmp.c	./ft_memmove.c	./ft_strlcpy.c	\
		./ft_strlcat.c	./ft_strnstr.c 	./ft_calloc.c	./ft_atoi.c		./ft_strdup.c	./ft_substr.c	\
		./ft_strjoin.c	./ft_itoa.c		./ft_strtrim.c	./ft_strmapi.c					./ft_split.c	\
		./ft_striteri.c																					\
		./ft_putchar_fd.c	./ft_putstr_fd.c	./ft_putendl_fd.c	./ft_putnbr_fd.c					\
		../ft_printf/ft_printf.c			../ft_printf/ft_printf_digits.c 	   \
		../ft_printf/ft_printf_hex.c		../ft_printf/ft_printf_words.c		   \
		../get_next_line/get_next_line.c	../get_next_line/get_next_line_utils.c \

OBJS = $(SRCS:.c=.o)

all: $(NAME)


$(NAME): $(OBJS)
		$(AR) $(NAME) $^


%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@


clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)


re: fclean all

.PHONY: all clean fclean 
