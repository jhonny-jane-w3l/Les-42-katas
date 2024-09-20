/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cw3l <cw3l@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 08:13:44 by cw3l              #+#    #+#             */
/*   Updated: 2024/09/20 08:34:43 by cw3l             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*ptr;
	t_list	*tmp;

	if (!lst || !del)
		return ;
	ptr = *lst;
	while (ptr->next)
	{
		tmp = ptr->next;
		ft_lstdelone(ptr,del);
		ptr = tmp;
	}
	*lst = NULL;
}
