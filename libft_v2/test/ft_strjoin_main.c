#include "./../libft.h"

int	main(void)
{
	char txt[] = "hello dwdq dwqdw";
	char txt2[] = " i";

	char *new = ft_strjoin(txt,txt2);
	ft_putendl_fd(new,1);
	return (0);
}
