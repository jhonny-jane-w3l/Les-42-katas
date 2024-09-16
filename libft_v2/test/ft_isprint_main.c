#include "./../libft.h"

int	main(void)
{
	char str[] = "Aa123\n ";
	int i;

	i = 0;
	while (str[i])
	{
		printf("%d est un caractere printable\n",ft_isprint(str[i]));
		i++;
	}
	return (0);
}
