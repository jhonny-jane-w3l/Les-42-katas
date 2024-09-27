# PARTIE 1

# ft_isalnum:

Teste pour tout caractère pour lequel isalpha(3) ou isdigit(3) est vrai.

# ft_memset:

Le rôle de la fonction est de remplir un tableau octet par octet, en fonction de la taille donnée en paramètre, de la valeur int (à caster en unsigned char).

Memset ne gère pas le caractère nul en fin de tableau.

Idéal pour instancier des tableaux de caractères ou de bytes. PAS D'INT !

# ft_memcpy:

La fonction memcpy() copie n octets depuis la zone mémoire src vers la zone mémoire dest.

prototype : void	*ft_memcpy(void *dst, const void *src, size_t n);

Dans le cas ou src et dst sont egal a null et n > 0, bien faire attention a renvoyé null pour ne pas provoquer un comportement indesirable.

De plus, ne pas oublier de caster src et dst avant la copir : ((unsigned char *)dst)[i] = ((unsigned char *)src)[i]

# ft_memmove:

Memmove permet de créer des décalages de mémoire quand source et destination se chevauchent.

Dans le cas ou src et dst sont egal a null et len > 0, bien faire attention a renvoyé null pour ne pas provoquer un comportement indesirable.

Il est important de bien definir le sens de remplissage pour eviter cette problematique de chevauchement

Si dst < src, c'est à dire que la destination est avant la source,  alors le remplissage doit etre effectuer du debut vers la fin.

Si dst < src, c'est à dire que la destination est aprés la source,  alors le remplissage doit etre effectuer de la fin vers le debut.

Comparaison d'adresse memoire: Les adresses mémoire sont simplement des nombres qui indiquent un emplacement dans la mémoire de l'ordinateur. Par exemple, si d pointe vers l'adresse 0x1000 et s pointe vers l'adresse 0x2000, d < s signifie que 0x1000 est inférieur à 0x2000

# ft_calloc:

Allocation de mémoire, comme malloc + initialisation à 0 (comme bzero).

# ft_strncmp:
Bien faire attention à caster en unsigned char pour faire la comparaison et la soustraction. 

signed char = -128 à 127
unsigned char = 0 à 255

exemple "é" = 233 en unsigned char et -23 en signed char d'ou le comportement innatendu.


# ft_strlcpy:

Version sécurisée de strcpy, car garantit le dernier caractère nul. Copie dstsize - 1 de src dans dst. Termine dst par un caractère NULL.

Explication:

Si la taille de dst > 0, une boucle de copy est lancé. Cette boucle tourne tant que i < dstsize -1 et que src[i] est vrai.
A dstsize le caractére '\0' est copié.
Ensuite une boucle est lancé tant que src[i] est vrai. Cette seconde boucle permet de verifier si la copie a été complète ou tronquée en renvoiyant la longueur de src sans le caractère NULL

Si la tronquation est voulue, on peut ignorer ce retour.

# ft_strlcat



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

Attention Verification à faire:

* 1: Si needle_len > len renvoyer zero. En effet si la taille du pattern est plus grande que le nombre de caracte a comparer, la comparaison est impossible.

* 2: avant de faire la comparaison, verifier que i+1 est < len. Par exemple ici: ft_strnstr(0x102ee5f60: "aaxx", "xx", 3). 

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

Conpare deux pointeeur. Contrairement a strncmp, ft_memcmp continue quand elle rencontre un caractère NULL. memcmp compare deux espace de memoire , alors ft_strncmp compare deux chaine de charactère. 

exemple:
            [a] [a] [a] [/0] [a] [a] [a] [a] [a]
            [a] [a] [a] [/0] [a] [a] [a] [a] [a]

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

## BONUS

# ft_lstnew

Objectif: creer un nouveau pointeur de type t_list.
t_list est une structurequi contien un  pointeur Content et un poiteur next repèsentant l'element suivant de la liste. A la création de l'ement, next pointe vers null (premièrs element de la liste chainée).

# ft_lstadd_front

Objectif: ajouter un element à la liste chainée , en tete de liste.

Methode:

faire pointer next vers l'adresse contenu dans le tableau de pointeur.

Attribuer au tableau de pointeur l'adresse du nouveau element.

# ft_lstsize

Objectif : mesurer la taille d'une liste chainée.
Methode: 

* 1 definifir un compteur.
* 2 Protéger la fonction (si lst == NULL --> return NULL ).
* 3 faire tourner une boucle tant que lst. (faire a ttention à la condition de la boucle pour bien aller au bout de la liste.)
* 4 incrementer le compteur.
* 5 Retourner i.

# ft_lstlast

Objectif: récuperer le dernier élément d'une liste chainé.

Attention à la condition de la boucle (lst.next).

# ft_lstadd_back

Objectif : Ajouter un élément en queu de liste.

* 1 Gerer le cas ou la liste est vide en atribuant au tableau de poiteur l'adresse du nouvelle element (*lst = new).

Si la liste n'est pas vide :

* 2 Recuperer le dernier element de la liste chainée à l'aide de la fonction ft_lstlast.

* 3 attibuer au poiteur Next du dernier element la valeur de new (tmp->next = new).

# ft_lstdelone

Objectif: supprimer un element de la list.

Appliquer la fonction del à lst->content (supprimer le contenu)
liberer la memoire de l'élément.

# ft_lstclear

Objectif : Supprimer tout la liste

Mehode: 

* 1: Verifier que les argument ne sont pas egal à NULL;
* 2: parcourir la liste.
* 3: avant de supprimer l'element , enregistrer l'adresse de l'element suivant dans une variable temporaire.
* 4: supprimmer l'élément à l'aide ft_lstdelone.
* 5: Mettre à jour le premier élément de la liste chaînée pour qu'il pointe vers le nœud désigné par tmp.
* 6: Nettoyer (NULL) et liberer la memoire (free).

free(*lst); : Remet l'espace mémoire occupé par l'élément à disposition du système. C'est la libération de mémoire.

*lst = NULL; : Sert à nettoyer le pointeur en le réinitialisant, ce qui évite d'utiliser un pointeur invalide.

# ft_lstiter

L'objectif est de parcourir une liste chainée et d'appliquer la fonction f à chaque lst->content.

Mehode: 

* 1: Verifier que les argument ne sont pas egal à NULL;
* 2: parcourir la liste et appliqeur la fonction avec lst->content pour paramètre.
* 3: passer à l'élément suivant: lst = lst.next

# ft_lstmap

Objectif : crééer un nouvelle liste. f(ft_lstnew(lst.content)).

On creer la variable de la nouvelle liste.
Pour protéger la fonction, on verifie que aucun des argument de la fonction ne soit null.
Itérer sur la liste.
On crée un nouvelle element de liste à l'aide ft_lstnew avec comme paramètre f(lst->content)
Si l'allocation ft_lstnew echoue et renvoy null, appliquer la fonction ft_lstclear(&new_link, del) avec comme argument l'element et la fonction del et returner null.
On ajoute le nouvelle element à la liste grace à la fonction ft_lstaddback. ft_lstaddback gere le cas du premier element de la liste.
Incrementer sur la liste : lst = lst->next.
Renvoyer la variable de la nouvelle liste.

