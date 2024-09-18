#include "./../libft.h"

char to_uppercase(unsigned int index, char c)
{
    (void)index;
    return (char)ft_toupper(c);
}

int	main(void)
{
	char txt[]= "voici le text";
	char *ptr;

	ptr = ft_strmapi(txt,to_uppercase);
	printf("voici le resultat: %s\n",ptr);
	return (0);
}