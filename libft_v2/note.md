# ft_isalnum:
tests for any character for which isalpha(3) or isdigit(3) is true

# ft_memset:

Le rôle de la fonction est de remplir un tableau octets par octets, en fonction de la taille donnée en paramètre de la valeur int (à caster en unsigned char)

Memset ne gère pas le caractere nul en fin de tableau.

ideal pour instancier des tableau de caracteres ou de bytes.
PAS DE INT!


# ft_memmove:

Memmove permet de creer des decalage de memoire quand source et destination ce chevauche

exemple:
Avant la copie (mémoire):
[ B ][ o ][ n ][ j ][ o ][ u ][ r ][ , ][   ][ m ][ o ][ n ][ d ][ e ]

Pendant la copie (avec memcpy, problème possible, comportement indefini): memcpy(str + 3, str, 7);
[ B ][ o ][ n ][ B ][ o ][ u ][ r ][ , ][   ][ m ][ o ][ n ][ d ][ e ] (les données sont écrasées)

Après la copie (avec memmove, fonctionne correctement) : memmove(str + 3, str, 7);
[ B ][ o ][ n ][ B ][ o ][ n ][ j ][ o ][ u ][ r ][ , ][ m ][ o ][ n ][ d ][ e ]

memmove utilise un tampon temporaire pour s'assurer que les données ne sont pas écrasées avant d'être entièrement copiées.

# ft_calloc:

Allocation de memoire, comme malloc  + initialization a 0 (comme bzero).

# ft_strlcpy

version securisé de strcpy car garanti le derniers caractere null.
Copy dstsize - 1 de src dans dst.
Termine dst par un caractère NULL.

# ft_strchr

L'objectif est de trouver la première occurence c dans une chaine de caractère.
Un poiteur vers le charactère dans la source est renvoyé si la caractère est trouvé.
Si le charactère n'est pas trouvé, un pointeur null est renvoyé;
Si le charactère recherché est '\0' un pointeur vers la fin de la chaine est renvoyé.

# ft_strrchr

idem ft_strchr mais cherche la dernière occurance d'un entier converti en charactère.

l'idée est de créer un poiteur qui servira pour enregistrer l'adresse de la dernière occurance trouvé

# ft_memchr A APPRONFONDIR

chercher une valeur dans une sequence de bytes. le type generalement utilisé pour comparer ou chercher les bytes est le unsigned char.

# ft_strnstr

needle = aiguille
haystack = meule de foin.

L'objectif de la fonction est de trouver la sous chaine needle dans haystack limité a n caractère.

SI needle est vide , c'est la meule qui est renvoyé
Si needle n'existe pas dans haystack c'est un pointeur NULL qui est retourné.
Si needle existe, un poiteur vers le premier charactere dans haystack est renvoyé.

Methode: parcourir haystack. Si haystack[i] == needle[0], apeller la fonction ft_strncmp. Si ft_strncmp == 0 , retourner haystack[i]

# ft_strndup
objectif de la fonction: duppliquer une chaine de charactère en allouant un bloc memoire de n bytes.

methode: malloc + strlcpy;

# ft_atoi (verifier si la focntion doit gerer les int superieur aux max)

L'objectif est de convertir une chaine de charactère en entier: ascii to int,

methode:

* Parcourir la chaine tant que le charactère renvoie true à la fonction ispace. (ascii value : 9, 10, 11, 12, 13, 32)
* Compter les signe moins pour determiner la valeur du signe final.
* Creer une variable qui servira a stocker notre valeur final.
* Parcourir la chaine tant que le charactère renvoie true à la fonction isdigit alors appliquer la formule:

```bash
 num = num * 10 + str[i] - '0';
```

exemple:    str = "12345" --->  str[i] = "1"
            num = 0             num = 0 * 10 + "1" + '0' = 1

            str = "2345" --->  str[i] = "2"
            num = 1            num = 1 * 10 + "2" + '0' = 12

            str = "345"  --->  str[i] = "3"
            num = 12           num = 12 * 10 + "3" + '0' = 123

            str = "45"   --->  str[i] = "4"
            num = 123          num = 123 * 10 + "4" + '0' = 1234

            str = "5"    --->  str[i] = "5"
            num = 1234         num = 1234 * 10 + "1" + '0' = 12345

Determiner le signe :

Si le nombre de signe - est paire alors le resultat sera positif;
Si le nombre de signe - est impaire alors le resultat sera negatif;



