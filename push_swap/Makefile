CC=cc
GFLAGS= -Wall -Werror -Wextra -fsanitize=address -g 
SRCS=$(wildcard srcs/*.c)
OBJS=$(SRCS:.c=.o)
NAME=push_swap
DATE= @date

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(GFLAGS) $(OBJS) -Llib -lft -lftprintf -o $(NAME)

clean:
	cd srcs && rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

gdev: 
	cd .. && git add . && git commit -m $(DATE) && git push

.PHONY: re all fclean 