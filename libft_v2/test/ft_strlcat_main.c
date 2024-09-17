#include "./../libft.h"

int	main(void)
{
	char dst[20] =  "hello ";
	char src[] = 	"worldfqfqfeqfeqefqefq";

	ft_strlcat(dst,src,20);
	ft_putendl_fd(dst,1);

	return (0);
}
