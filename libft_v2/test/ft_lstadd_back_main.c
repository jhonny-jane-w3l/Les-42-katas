#include "./../libft.h"

int	main(void)
{
	char txt[]= "voici le texte";
	char txt2[]= "new txt";
	// int i;

	// i = 10;
	t_list *p = ft_lstnew(txt);
	//printf("%p , %s/n",p->next, (char *)p->content);

	t_list **pt;
	//printf("%p , %s\n",p->next, (char *)p->content);

	pt = malloc(sizeof(t_list*));
	if (pt == 0)
		return (0);
	*pt = p;

	t_list *z = ft_lstnew(txt2);
	ft_lstadd_front(pt,z);
	t_list *ptr = *pt;
	t_list *u = ft_lstnew("dernier");
	
	while (ptr->next)
	{
		printf("%s\n", (char*)ptr->content);
		ptr = ptr->next;
	}
	printf("%s\n", (char*)ptr->content);
	
	ft_lstadd_back(pt,u);
	
	while (ptr->next)
	{
		ptr = ptr->next;
		//printf("%s\n", (char*)ptr->content);
	}
	printf("%s\n", (char*)ptr->content);
	
	return (0);
}
