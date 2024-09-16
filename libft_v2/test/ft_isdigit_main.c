#include "./../libft.h"
int	main(void)
{
	char c = '1';
	char d = 10;
	printf ("%d\n",ft_isdigit(c));
	printf ("%d\n",ft_isdigit(d));
	printf ("%d\n",isdigit(c));
	printf ("%d\n",isdigit(d));
	return (1);
}