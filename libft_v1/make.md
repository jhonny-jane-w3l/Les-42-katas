Décomposition du Makefile
Variables

    SRC: Cette variable liste tous les fichiers source (.c) du projet. Ces fichiers contiennent le code C qui doit être compilé.

    makefile

SRC = ./ft_strlen.c \
    ./ft_strcat.c \
    ...
    ./main.c

OBJ: Cette variable convertit les fichiers source en fichiers objets (.o). Les fichiers objets sont les versions compilées des fichiers source.

makefile

OBJ = $(SRC:.c=.o)

CFLAGS: Flags du compilateur qui contrôlent le processus de compilation. Les flags utilisés ici sont :

    -Werror: Considère tous les avertissements comme des erreurs.
    -Wextra: Active des flags d'avertissement supplémentaires.
    -Wall: Active la plupart des flags d'avertissement.
    -fsanitize=address: Active le sanitizer d'adresses, qui aide à trouver les erreurs de mémoire.
    -I./include: Spécifie le répertoire pour les fichiers d'en-tête.

makefile

CFLAGS += -Werror -Wextra -Wall -fsanitize=address -I./include

NAME: Le nom du binaire final.

makefile

    NAME = binary_name
    NAME2 = binary_no_flag

Règles

    $(NAME): Cette règle définit comment créer le binaire final en utilisant les fichiers objets. Elle utilise cc (le compilateur C) avec les flags spécifiés dans CFLAGS.

    makefile

$(NAME): $(OBJ)
    cc $(CFLAGS) -o ./$(NAME) $(OBJ)

all: Cette règle par défaut exécute la règle $(NAME), ce qui signifie qu'elle construit le binaire principal.

makefile

all:   $(NAME)

no: Cette règle construit un binaire alternatif nommé binary_no_flag en utilisant les mêmes objets, mais sans les flags de compilation.

makefile

no: $(NAME2)

clean: Cette règle supprime tous les fichiers objets pour nettoyer le répertoire.

makefile

clean:
    rm -f $(OBJ) && clear

fclean: Cette règle supprime les fichiers objets et le binaire final, offrant un nettoyage complet.

makefile

fclean: clean
    rm -f ./$(NAME)

re: Cette règle exécute fclean puis all, ce qui signifie qu'elle nettoie tout et reconstruit le projet depuis zéro.

makefile

re:	fclean all

c: Cette règle nettoie l'écran du terminal.

makefile

c:
    clear

.PHONY: Cette ligne indique que les cibles spécifiées (all, clean, fclean, re, c) ne sont pas des fichiers, mais des noms de commandes.

makefile

    .PHONY: all clean fclean re

Utilisation de Make

Pour utiliser ce Makefile, suivez ces étapes :

    Compiler le projet:

    sh

make

Cette commande utilise la règle par défaut (all) pour compiler le projet et créer le binaire principal.

Nettoyer les fichiers objets:

sh

make clean

Cette commande supprime les fichiers objets (.o).

Nettoyer tout:

sh

make fclean

Cette commande supprime les fichiers objets et le binaire principal.

Recompiler depuis zéro:

sh

make re

Cette commande nettoie tout (fclean) puis recompile le projet (all).

Créer le binaire alternatif sans flags de compilation:

sh

make no

Cette commande crée un binaire nommé binary_no_flag.