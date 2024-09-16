#include "./../libft.h"

int	main(void)
{
	size_t len;
	int  *ptr;
	void *ptr2;

	len = 10;
	ptr = malloc (sizeof(int) * len);
	if (ptr == NULL)
	{
		return (-1);
	}
	void *p = ft_memset(ptr,1,len);
	
	printf("voici la value %c  \n", ((char *)p)[9]);
	
	ptr2 = malloc (sizeof(char) * 5 + 1);
	
	char *p2 = memset(ptr2,'A',len);

	printf("\n");
	printf("voici %c\n", p2[4]);
	
	return (0);
}
