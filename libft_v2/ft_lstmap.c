/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cw3l <cw3l@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 14:59:04 by cw3l              #+#    #+#             */
/*   Updated: 2024/09/20 15:47:03 by cw3l             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{

	//t_list	*new_list;
	//t_list	*new_link;

	if(!lst || !f || !del)
		return (NULL);
	
	while (lst->next)
	{
		// new_link = ft_lstnew(f(lst->content));
		// if (!new_link)
		// 	ft_lstclear(&new_link,del);
		// ft_lstadd_back(&new_list, new_link);
		lst = lst->next;
	}
	return (0);
}