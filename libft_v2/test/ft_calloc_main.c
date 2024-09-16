#include "./../libft.h"

int	main(void)
{
	void *i;
	void *j;
	char txt[] = "voicidd	wd le text";
	size_t len = ft_strlen(txt);

	i = ft_calloc(10,4);
	printf("voici un test sur le pointeur %d\n",((int *)i)[3]);
	((int *)i)[3] = 259;
	printf("voici un test sur le pointeur %d\n",((int *)i)[3]);
	j = ft_calloc(len,1);
	ft_memcpy(j,txt,len);
	ft_putendl_fd(j,1);
	return (0);
}
