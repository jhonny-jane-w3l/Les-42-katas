#include "./../libft.h"

int	main(void)
{
	size_t len;
	int  *ptr;
	

	len = 10;
	ptr = malloc (sizeof(int) * len);
	if (ptr == NULL)
	{
		return (-1);
	}
	ft_bzero(ptr,len);
	
	return (0);
}
