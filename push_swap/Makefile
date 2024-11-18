CC=cc
GFLAGS= -Wall -Werror -Wextra -fsanitize=address -g 
SRCS=$(wildcard srcs/*.c)
OBJS=$(SRCS:.c=.o)
NAME=push_swap

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(GFLAGS) $(OBJS) -Llib -lft -lftprintf -o $(NAME)

clean:
	cd srcs && rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

gdev: 
	date	
	cd .. && git add . && git commit -m $(NAME) && git push

.PHONY: re all fclean 