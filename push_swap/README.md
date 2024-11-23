## Journal de bord.

22 / 11 / 2024

j'ai construit la fonction qui verifie la conformité des arguments . Pour etablire la conformité des arguments j'ai effectuer des test et analyser les output du checker 42 pour une baterie de paramettre

voir : /doc/valide_args.md

J'effectue des test sur le parsing des argument dans un tableau d'entier;

etape 1: connaitre le nombre d'entier pour allouer le tableau.

etape 2: remplire le tableau d'entier.

ma methode est fonctionne. Je parcours les argument *argv. Je verifie si il y a une espace dans l'argument.
Dnas ce cas l'argument est passer a ft_split.
Le resultat est parcouru et rempli un tableau d'entier de chaque valeur passée a atoi.
S'il n'y a pas d'espace, argv est directement passé a atoi en envoyer au tableau d'entier

etape 3: j'ai construit la fonction pour verifier les doublons dans le tableau d'entier.

23 Novembre 2024

j'attaque l'etude des algorithme de tri. Je commence par quick sort, qui s'emblerais etre l'algorithme le plus efficasse sur les grand ensemble de nombre.
J'atudirais radix et autre nom evoqué par les etudiants dans les cluster de 42.

Quicksort:

De ce que j'ai compris cette algorythme consiste a determiner une valeur pivot dans le tableau. Je cherche a savoir s'il est plus efficasse de choisir un pivot en fonction de ça valeur ou en fonction de sont index. Je vais faire des test et dois apprendre a mesurer la complexité d'un algorythme.

Il n'est pas necessaire que le pivot soit une valeur presente dans le tableau. Le pivot pourais etre la valeur moyenne de tout les element du tableau, ou la mediane du premier, dernier et element du milieu.