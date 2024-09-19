# PARTIE 1

# ft_isalnum:

Teste pour tout caractère pour lequel isalpha(3) ou isdigit(3) est vrai.

# ft_memset:

Le rôle de la fonction est de remplir un tableau octet par octet, en fonction de la taille donnée en paramètre, de la valeur int (à caster en unsigned char).

Memset ne gère pas le caractère nul en fin de tableau.

Idéal pour instancier des tableaux de caractères ou de bytes. PAS D'INT !

# ft_memmove:

Memmove permet de créer des décalages de mémoire quand source et destination se chevauchent.

Exemple: Avant la copie (mémoire) : [ B ][ o ][ n ][ j ][ o ][ u ][ r ][ , ][ ][ m ][ o ][ n ][ d ][ e ]

Pendant la copie (avec memcpy, problème possible, comportement indéfini) : memcpy(str + 3, str, 7); 
[ B ][ o ][ n ][ B ][ o ][ u ][ r ][ , ][ ][ m ][ o ][ n ][ d ][ e ] (les données sont écrasées)

Après la copie (avec memmove, fonctionne correctement) : memmove(str + 3, str, 7); 
[ B ][ o ][ n ][ B ][ o ][ n ][ j ][ o ][ u ][ r ][ , ][ m ][ o ][ n ][ d ][ e ]

memmove utilise un tampon temporaire pour s'assurer que les données ne sont pas écrasées avant d'être entièrement copiées.

# ft_calloc:

Allocation de mémoire, comme malloc + initialisation à 0 (comme bzero).

# ft_strlcpy:

Version sécurisée de strcpy, car garantit le dernier caractère nul. Copie dstsize - 1 de src dans dst. Termine dst par un caractère NULL.

# ft_strchr:

L'objectif est de trouver la première occurrence de c dans une chaîne de caractères. Un pointeur vers le caractère dans la source est renvoyé si le caractère est trouvé. Si le caractère n'est pas trouvé, un pointeur NULL est renvoyé. Si le caractère recherché est '\0', un pointeur vers la fin de la chaîne est renvoyé.

# ft_strrchr:

Idem ft_strchr mais cherche la dernière occurrence d'un entier converti en caractère.

L'idée est de créer un pointeur qui servira à enregistrer l'adresse de la dernière occurrence trouvée.

# ft_memchr A APPROFONDIR:

Chercher une valeur dans une séquence de bytes. Le type généralement utilisé pour comparer ou chercher les bytes est le unsigned char.

# ft_strnstr:

needle = aiguille 
haystack = meule de foin.

L'objectif de la fonction est de trouver la sous-chaîne needle dans haystack limitée à n caractères.

SI needle est vide, c'est la meule qui est renvoyée. Si needle n'existe pas dans haystack, c'est un pointeur NULL qui est retourné. Si needle existe, un pointeur vers le premier caractère dans haystack est renvoyé.

Méthode : parcourir haystack. Si haystack[i] == needle[0], appeler la fonction ft_strncmp. Si ft_strncmp == 0, retourner haystack[i].

# ft_strndup:

Objectif de la fonction : dupliquer une chaîne de caractères en allouant un bloc mémoire de n bytes.

Méthode : malloc + strlcpy.

# ft_atoi (vérifier si la fonction doit gérer les int supérieurs au max):

L'objectif est de convertir une chaîne de caractères en entier : ascii to int.

Méthode :

Parcourir la chaîne tant que le caractère renvoie true à la fonction isspace (ascii value : 9, 10, 11, 12, 13, 32).
Compter les signes moins pour déterminer la valeur du signe final.
Créer une variable qui servira à stocker notre valeur finale.
Parcourir la chaîne tant que le caractère renvoie true à la fonction isdigit, puis appliquer la formule :

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

Déterminer le signe :

Si le nombre de signes "-" est pair, alors le résultat sera positif. Si le nombre de signes "-" est impair, alors le résultat sera négatif.

# ft_memcmp:

Revoir le concept de comparaison de bytes.

## PARTIE 2 :

# ft_substr:

malloc(len) + strlcpy(dst pointeur, start pointeur, len);

Objectif : allouer de la mémoire et extraire une sous-chaîne.

# ft_strtrim:

Objectif : créer une nouvelle chaîne = à s1 moins les valeurs du set : Exemple : str = frfrcedrricfr , set = fr, return = cedric.

Solution :

1 : Parcourir la chaîne et compter le nombre de valeurs à soustraire de la chaîne (attention aux doublons).
2 : Allouer la mémoire : taille de la chaîne - nombre de valeurs à soustraire.
3 : Parcourir la source et le set à l'aide d'une double boucle.
Si une valeur du set est trouvée, sortie de la deuxième boucle.
4 : Si le caractère n'appartient pas au set, il est copié dans le pointeur vers la nouvelle chaîne.
ft_strmapi
Retourne une nouvelle chaîne de caractères résultant de l'application d'une fonction (*f)(i, s[i]) sur une chaîne d'origine.

Il peut être nécessaire de wrapper la fonction à appliquer pour la faire correspondre au type void attendu.

# ft_striteri:

Idem ft_strmapi, mais ne renvoie rien. Travaille directement sur la chaîne.

# ft_split:

Objectif : Splitter une chaîne en fonction d'un caractère cible. Retourner le tableau de strings issu du split.

Revoir la fonction en détail.

# ft_itoa:

Convertir un entier en chaîne de caractères.

Note : Attention avec le type INT_MIN. Attention avec le zéro.

Méthode :

1 : Récupérer la taille de l'entier. Ajouter +1 pour le caractère NULL et +1 si n est négatif.
2 : Allouer la mémoire pour la nouvelle chaîne grâce à la taille récupérée précédemment.
3 : Créer une boucle : while (n >= 1) et attribuer n % 10 + '0' à str[i]. Le remplissage se fait de droite à gauche. n % 10 permet de récupérer le dernier chiffre de l'entier.
4 : Ajouter le signe si is_negatif = 1.
5 : Insérer le caractère nul au bon endroit. (Rappel : le remplissage se fait de droite à gauche).

# BONUS