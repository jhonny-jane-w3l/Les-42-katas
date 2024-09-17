#include "./../libft.h"

int	main(void)
{

	char txt[]= "voieexci un texttite dune l'onguereur";
	char txt2[]= "uer";

	printf("%s\n",ft_strnstr(txt,txt2,ft_strlen(txt)));

	return (0);
}
