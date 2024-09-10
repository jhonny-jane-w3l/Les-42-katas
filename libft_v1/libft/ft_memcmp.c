/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cw3l <cw3l@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 03:05:48 by cw3l              #+#    #+#             */
/*   Updated: 2024/07/29 01:45:15 by cw3l             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*src1;
	const char	*src2;
	size_t		i;

	if (n > 0)
	{
		src1 = s1;
		src2 = s2;
		i = 0;
		while (i < n && src1[i] == src2[i])
			i++;
		return (src1[i] - src2[i]);
	}
	return (0);
}
