#include "./../libft.h"

void	*print_data(void *ptr)
{
	int i;
	char *p;

	i = 0;

	p = ptr;
	while (p[i])
	{
		p[i] = ft_toupper(p[i]);
		i++;
	}
	return (ptr);
}

void del_content(void *content)
{
    free(content);  // Libération du contenu alloué dynamiquement
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
	ft_lstadd_back(&ptr,u);
	ft_lstadd_back(&ptr,test);

	while (ptr)
	{
		printf(" voici le texte : %s\n",(char*)ptr->content);
		ptr = ptr->next;
	}
	
	printf("debut de la nouvelle fonction: \n");
	
	t_list *list;

	list = ft_lstmap(*pt,&print_data,del_content);

	while (list)
	{
		printf(" voici le texte : %s\n",(char*)list->content);
		list = list->next;
	}
	
	return (0);
}
