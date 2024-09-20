#include "./../libft.h"

int	main(void)
{
	char txt[]= "voici le texte";

	t_list *ptr = ft_lstnew(txt);

	printf("%p , %s",ptr->next, (char *)ptr->content);
	
	return (0);
}
