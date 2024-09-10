/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cw3l <cw3l@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 14:59:35 by cw3l              #+#    #+#             */
/*   Updated: 2024/07/29 22:02:21 by cw3l             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*itoa_process(int is_negatif, char *src, int n)
{
	char	mod;
	int		i;

	i = 0;
	if (is_negatif)
		n = -n;
	while (n >= 10)
	{
		mod = n % 10 + '0';
		src[i] = mod;
		n = n / 10;
		i++;
	}
	src[i++] = n + '0';
	if (is_negatif)
		src[i++] = '-';
	src[i] = 0;
	return (src);
}

char	*ft_itoa(int n)
{
	int		size;
	char	*ptr;
	int		is_negatif;

	if (n == -2147483648)
		return ("-2147483648");
	size = ft_size_int(n);
	is_negatif = ft_isnegatif(n);
	if (is_negatif)
		ptr = ft_memalloc(size + 2);
	if (!is_negatif)
		ptr = ft_memalloc(size + 1);
	ptr = itoa_process(is_negatif, ptr, n);
	ft_strrev(ptr);
	return (ptr);
}
