#include "./../libft.h"

int	main(void)
{
	char txt[]= "voici le texte";
	char txt2[]= "new txt";
	int i;

	i = 10;
	t_list *p = ft_lstnew(txt);
	//printf("%p , %s/n",p->next, (char *)p->content);

	t_list **pt;
	printf("%p , %s\n",p->next, (char *)p->content);

	pt = malloc(sizeof(t_list*));
	if (pt == 0)
		return (0);
	*pt = p;

	
	printf("%p , %s\n",pt[0]->next, (char *)pt[0]->content);

	t_list *z = ft_lstnew(txt2);
	//printf("%p , %s\n",z->next, (char *)z->content);

	ft_lstadd_front(pt,z);
	printf("%p , %s\n",pt[0]->next, (char *)pt[0]->content);

	t_list *k = ft_lstnew(&i);
	//printf("%p , %s\n",z->next, (char *)z->content);

	ft_lstadd_front(pt,k);
	printf("%p , %d\n",pt[0]->next->next->next, *(int*)pt[0]->content);
	
	return (0);
}
