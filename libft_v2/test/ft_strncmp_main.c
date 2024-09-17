#include "./../libft.h"

int	main(void)
{
	char txt[] = "qfqfqe";
	char txt2[] = "fqfqefqf";

	printf("voici le resultst de la compsraison %d\n",ft_strncmp(txt,txt2,5));
	printf("voici le resultst de la compsraison %d\n",ft_strncmp(txt,txt2,3));
	printf("voici le resultst de la compsraison %d\n",ft_strncmp(txt,txt2,0));
	printf("voici le resultst de la compsraison %d\n",ft_strncmp(txt,txt2,10));
	return (0);
}
