CFLAGSS = -Wall -Wextra -Werror
SRCS = helper_func.c	main.c
OBJS = $(SRCS:.c=.o)
NAME = push_swap

all: $(NAME)

$(NAME) : $(OBJS)
	gcc $(OBJS) -o $(NAME)

.c.o:
	$(CC) $(CFLAGSS) -c $< -o $@

clean:
	rm -rf $(OBJS) $(NAME)

re: clean all

.PHONY: clean re