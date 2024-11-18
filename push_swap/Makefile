CC=cc
GFLAGS= -Wall -Werror -Wextra -fsanitize=address -g 
SRCS=$(wildcard srcs/*.c)
OBJS=$(SRCS:.c=.o)
NAME=push_swap

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(SRCS) -Llib -lft -lftprintf -o $(NAME)

clean:
	cd srcs && rm -f *.o

fclean: clean
	rm -f $(NAME)