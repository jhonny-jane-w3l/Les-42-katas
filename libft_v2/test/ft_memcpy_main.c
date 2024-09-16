#include "./../libft.h"

int	main(void)
{
	char txt1[] = "voici la premiere string";
	char txt2[] = "";

	int size = ft_strlen(txt1);
	ft_memcpy(txt2,txt1,ft_strlen(txt1));
	int i;

	i = 0;
	while (i < size )
	{
		printf("%c\n", txt2[i]);
		i++;
	}
	return (0);
}
