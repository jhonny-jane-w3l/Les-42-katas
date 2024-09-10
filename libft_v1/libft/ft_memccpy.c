/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cw3l <cw3l@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 02:17:11 by cw3l              #+#    #+#             */
/*   Updated: 2024/07/29 00:59:29 by cw3l             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char		*d;
	const char	*s;
	int			i;
	int			j;

	d = dst;
	s = src;
	i = 0;
	j = 0;
	while (n >= 0 && s[j] != c)
	{
		d[i++] = s[j++];
		n--;
	}
	d[i++] = s[j];
	d[i] = 0;
	return (dst);
}
