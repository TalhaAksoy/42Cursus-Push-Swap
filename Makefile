# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: saksoy <saksoy@student.42istanbul.com.t    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/22 17:01:00 by saksoy            #+#    #+#              #
#    Updated: 2022/06/22 17:07:20 by saksoy           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGSS = -Wall -Wextra -Werror
SRCS = helper_func.c	main.c
OBJS = $(SRCS:.c=.o)
NAME = push_swap
CC = gcc
LIB = ./libft/libft.a

all: $(NAME)

$(NAME) : $(LIB)  $(OBJS)
	gcc $(OBJS) ./libft/libft.a -o $(NAME)

$(LIB) :
	@make bonus -sC ./libft
	@echo "libft compiled."

.c.o:
	$(CC) $(CFLAGSS) -c $< -o $@

clean:
	rm -rf $(OBJS) $(NAME)
	make fclean -sC ./libft

re: clean all

.PHONY: clean re