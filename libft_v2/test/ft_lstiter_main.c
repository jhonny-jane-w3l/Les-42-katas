#include "./../libft.h"

void	print_data(void *ptr)
{
	ft_putendl_fd((char*)ptr,1);
}

int	main(void)
{
	char txt[]= "voici le texte";
	char txt2[]= "new txt";
	
	t_list *p = ft_lstnew(txt);
	t_list **pt;
	pt = malloc(sizeof(t_list*));
	if (pt == 0)
		return (0);
	*pt = p;
	t_list *z = ft_lstnew(txt2);
	ft_lstadd_front(pt,z);
	t_list *ptr = *pt;
	t_list *u = ft_lstnew("dernier");
	t_list *test = ft_lstnew("last dernier tonton");
	ft_lstadd_back(pt,u);
	ft_lstadd_back(pt,test);
	
	while (ptr->next)
		ptr = ptr->next;
	while (ptr->next)
		ptr = ptr->next;
	printf("debut de la nouvelle fonction: \n");
	ft_lstiter(p,print_data);
	
	return (0);
}
