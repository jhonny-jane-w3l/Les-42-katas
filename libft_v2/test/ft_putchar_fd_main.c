#include "./../libft.h"

int	main(void)
{
	char txt[] = "hello world";
	int i;

	i = 0;
	while (txt[i])
	{
		ft_putchar_fd(txt[i],1);
		i++;
	}
	return (0);
}
