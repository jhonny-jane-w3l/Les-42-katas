# ft_isalnum:
tests for any character for which isalpha(3) or isdigit(3) is true

# ft_memset:

Le rôle de la fonction est de remplir un tableau octets par octets, en fonction de la taille donnée en paramètre de la valeur int (à caster en unsigned char)

Memset ne gère pas le caractere nul en fin de tableau.

ideal pour instancier des tableau de caracteres ou de bytes.
PAS DE INT!

# ft_calloc:

Allocation de memoire, comme malloc  + initialization a 0 (comme bzero).

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
