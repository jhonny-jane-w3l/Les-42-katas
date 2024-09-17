#include "./../libft.h"

int	main(void)
{
	char txt[] = "voici le text";
	char *ptr;
	

	ptr = malloc(sizeof(char) * 3);
	ft_strlcpy(ptr, txt, 0);
	ft_putendl_fd(ptr,1);
	return (0);
}
