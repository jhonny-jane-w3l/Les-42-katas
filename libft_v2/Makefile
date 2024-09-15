SOURCE = main.c 
CC = gcc
CFLAGS = -Wall -Wextra -Werror



clean:
	rm -f *.out

fclean:

re: fclean all


# other
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
