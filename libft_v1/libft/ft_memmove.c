/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cw3l <cw3l@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 03:59:33 by cw3l              #+#    #+#             */
/*   Updated: 2024/08/07 02:42:18 by cw3l             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*src1;
	char		*dest;
	size_t		i;

	if (dst == src || len == 0)
		return (dst);
	src1 = src;
	dest = dst;
	i = 0;
	while (i < len)
	{
		dest[i] = src1[i];
		i++;
	}
	return (dst);
}
