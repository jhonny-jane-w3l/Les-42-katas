SOURCE=	*.c

CC=gcc
CFLAGS= -Wall -Wextra -Werror
OBJS= $(SOURCE:*.c=*.o)
NAME=libft.a
s=

${NAME}: ${OBJS}
	ar rcs ${CFLAGS} 
clean:
	rm -f *.o

fclean:

re: fclean all

# other
.PHONY: test
test: test/$(basename $(s))_main.c $(s)
	@if [ -n "$(s)" ]; then \
		$(CC) $(CFLAGS) test/$(basename $(s))_main.c *.c -o $(basename $(s)).o; \
	else \
		echo "Erreur : Vous n'avez pas saisi de nom de fichier."; \
	fi
	

init:
	@read -p "Veuillez entrer le nom du fichier (sans extension) : " s; \
	if [ -n "$$s" ]; then \
		touch $$s.c; \
		cp template/template.c test; \
		mv test/template.c test/$$s\_main.c; \
		echo "File $$s\_main.c created in folder test"; \
		echo "File $$s.c created"; \
	else \
		echo "Erreur : Vous n'avez pas saisi de nom de fichier."; \
	fi

remove: 
	@read -p "Veuillez entrer le nom du fichier (sans extension) : " s; \
	if [ -n "$$s" ]; then \
		rm $$s.c; \
		rm test/$$s\_main.c; \
		echo "File $$s\_main.c deleted in folder test"; \
		echo "File $$s.c deleted"; \
	else \
		echo "Variable 's' is not set!"; \
	fi
