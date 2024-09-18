#include "./../libft.h"

int	main(void)
{
	char txt[] = "f!feefeq!rfrcedrr*i*cfr";
	char set[] = "ffeefeqrfrcedrr*i*cfr";
	printf ("%s\n", ft_strtrim(txt,set));
	return (0);
}
