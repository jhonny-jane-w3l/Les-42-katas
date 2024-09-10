/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cw3l <cw3l@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 20:19:51 by cw3l              #+#    #+#             */
/*   Updated: 2024/07/29 12:11:43 by cw3l             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strlcat(char *dst, char *src, size_t dstsize)
{
	size_t	len_dest;
	size_t	i;

	i = 0;
	len_dest = ft_strlen(dst);
	while (i < dstsize -1)
	{
		dst[len_dest++] = src[i++];
	}
	dst[len_dest] = '\0';
	return (dst);
}
