# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dosorio- <dosorio-@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/09 19:33:46 by dosorio-          #+#    #+#              #
#    Updated: 2026/01/15 14:57:21 by dosorio-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS = initialize_stacks.c \
       operations.c \
       parsing.c \
       push_swap_utils.c \
       push_swap.c \
       radix.c \
       utilites.c \
       utilites2.c

OBJS = $(SRCS:.c=.o)

CCF = cc -g -Wall -Wextra -Werror
RM = rm -f

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

all: $(LIBFT) $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

$(NAME): $(OBJS)
	$(CCF) $(OBJS) $(LIBFT) -o $(NAME)

%.o: %.c push_swap.h
	$(CCF) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

r: all clean
	clear
.PHONY: all clean fclean re