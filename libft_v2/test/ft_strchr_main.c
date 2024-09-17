#include "./../libft.h"

int	main(void)
{
	char txt[]= "voici le txt";
	char *ptr = ft_strchr(txt,' ');
	printf("%p\n", ptr);
	ft_putendl_fd(ptr,1);

	return (0);
}
