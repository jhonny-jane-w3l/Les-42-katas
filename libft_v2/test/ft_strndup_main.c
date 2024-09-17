#include "./../libft.h"

int	main(void)
{
	char txt[] = "voici le textdffffeqfeqfqefqfffffffffffffffffe";
	char txt1[] = "12 s3445";
	char txt2[] = " ";
	char txt3[] = "";
	printf("%s\n", ft_strndup(txt,ft_strlen(txt)));
	printf("%s\n", ft_strndup(txt1,ft_strlen(txt1)));
	printf("%s\n", ft_strndup(txt2,ft_strlen(txt2)));
	printf("%s\n", ft_strndup(txt3,ft_strlen(txt3)));

	return (0);
}
