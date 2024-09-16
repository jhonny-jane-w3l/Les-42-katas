#include "./../libft.h"

int	main(void)
{
	char *txt[] = {"hdwqdqello world", "hello world","hello world", NULL};
	int i;
	char *ptr;
	i = 0;
	while (txt[i] != NULL)
	{
		ptr = txt[i];
		ft_putendl_fd(ptr,1);
		i++;
	}
	return (0);
}