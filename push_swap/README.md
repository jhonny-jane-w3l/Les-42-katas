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