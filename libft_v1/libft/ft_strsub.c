/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cw3l <cw3l@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 14:46:25 by cw3l              #+#    #+#             */
/*   Updated: 2024/07/29 20:36:16 by cw3l             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*ptr;
	size_t			i;

	ptr = ft_memalloc(len + 1);
	i = 0;
	if (ptr != NULL)
	{
		while (i < len)
		{
			ptr[i++] = s[start++];
		}
		ptr[i] = '\0';
		return (ptr);
	}
	return (NULL);
}
