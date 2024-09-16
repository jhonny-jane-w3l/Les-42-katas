#include "./../libft.h"

int	main(void)
{
	char text[] = "hello world";
	char text2[] = "voici le txtdwqdqdq fqfqfq";

	int len = ft_strlen(text);
	char *ptr = malloc(sizeof(char) * len);
	if (ptr == NULL)
	{
		return (-1);
	}
	ft_memmove(text +3,text,9);
	printf("%s\n", text);
	memmove(text2 +5,text,9);
	printf("%s\n", text2);
		
	return (0);
}
