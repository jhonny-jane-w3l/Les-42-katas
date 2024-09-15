#include <stdio.h>
#include <libc.h>
#include <ctype.h>

int	main(void)
{
	char c = '1';
	char d = 49;
	printf ("%d\n",ft_isdigit(c));
	printf ("%d\n",ft_isdigit(d));
	printf ("%d\n",isdigit(c));
	printf ("%d\n",isdigit(d));

	
	return (1);
}