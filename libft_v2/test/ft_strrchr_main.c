#include "./../libft.h"

int	main(void)
{
	char txt[]= "voici le txiiiiiit";
	char *ptr = ft_strrchr(txt,'v');
	printf("%p\n", ptr);
	ft_putendl_fd(ptr,1);

	return (0);
}
