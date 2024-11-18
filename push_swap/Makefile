CC=cc
GFLAGS= -Wall -Werror -Wextra -fsanitize=address -g 
SRCS= $(Wildcard srcs/*.c)
OBJS=$(SRCS:.c=.o)
NAME=push_swap

all: $(NAME)

$(NAME): $(OBJS)