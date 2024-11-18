CC=cc
GFLAGS= -Wall -Werror -Wextra -fsanitize=address -g 
SRCS=$(wildcard srcs/*.c)
OBJS=$(SRCS:.c=.o)
NAME=push_swap
DATE=$(shell date | sed 's/ /_/g')
ARGS=

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(GFLAGS) $(OBJS) -Llib -lft -lftprintf -o $(NAME)

clean:
	cd srcs && rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

gdev:
	cd .. && git add . && git commit -m $(NAME)/$(DATE) && git push

	
#### test ###
#$(CC) $(GFLAGS) test/$(testunit).c -Llib -lft -lftprintf -o $(testunit) 

check:
	test/checker_Mac42 $(ARGS) 

.PHONY: re all fclean test