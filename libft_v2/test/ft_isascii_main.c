#include "./../libft.h"

int	main(void)
{
	char str[] = "Aa123$¨^ü *&";
	int i;

	i = 0;
	while (str[i])
	{
		printf("%d est un caractere alpha numerique \n",ft_isalnum(str[i]));
		i++;
	}
	return (0);
}
