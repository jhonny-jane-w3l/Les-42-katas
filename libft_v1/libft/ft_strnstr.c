/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cw3l <cw3l@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 00:07:25 by cw3l              #+#    #+#             */
/*   Updated: 2024/07/29 12:55:16 by cw3l             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;
	size_t		size;

	i = 0;
	j = 0;
	size = ft_strlen(needle);
	if (size == 0)
		return ((char *)haystack);
	while (i < len)
	{
		if (haystack[i] == needle[j])
			j++;
		else if (haystack[i] != needle[j])
			j = 0;
		if (j == size)
			return ((char *)haystack + ((i - j) + 1));
		i++;
	}
	return (NULL);
}
