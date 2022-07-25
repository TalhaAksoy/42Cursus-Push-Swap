# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: saksoy <saksoy@student.42istanbul.com.t    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/22 17:01:00 by saksoy            #+#    #+#              #
#    Updated: 2022/07/25 21:40:44 by saksoy           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGSS = -Wall -Wextra -Werror
SRCS = main.c	set_struct.c	push.c	swap.c	rotate.c reverse_rotate.c	control.c	radix.c	buble.c	./arg_sorted/three_arg_sort.c ./arg_sorted/four_arg_sort.c ./arg_sorted/five_arg_sort.c
OBJS = $(SRCS:.c=.o)
NAME = push_swap
CC = gcc
LIB = ./libft/libft.a
S = 0
E = 100

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

fclean: clean
	make fclean -sC ./libft

re: clean all

norm:
	@norminette *.[ch]
	@norminette ./libft/*.[ch]

vis: re
	python3 pyviz.py `ruby -e "puts ($(S)..$(E)).to_a.shuffle.join(' ')"`

.PHONY: clean re fclean norm all vis