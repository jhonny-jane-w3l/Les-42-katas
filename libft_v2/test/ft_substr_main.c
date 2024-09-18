#include "./../libft.h"

int	main(void)
{
	char txt[] = "";

	char *prt = ft_substr(txt,3,8);
	printf ("%p\n", prt);
	return (0);
}
