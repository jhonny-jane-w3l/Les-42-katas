/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cw3l <cw3l@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 00:56:30 by cw3l              #+#    #+#             */
/*   Updated: 2024/08/07 02:43:06 by cw3l             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char			*d;
	const char		*s;
	size_t			i;
	
	d = dst;
	s = src;
	i = 0;
	if (dst == src || n == 0)
		return (dst);
	while (i < n)
	{
		d[i] = s[i];
		i++;;
	}
	return (dst);
}

// ne pas copier le dernier caractere null? d'apres la francinette
// verification : if (dst == src || n == 0)
// 		return (dst);