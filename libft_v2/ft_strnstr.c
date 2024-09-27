/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cw3l <cw3l@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 09:29:30 by cw3l              #+#    #+#             */
/*   Updated: 2024/09/27 05:52:03 by cw3l             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	needle_len;

	i = 0;
	needle_len = ft_strlen(needle);
	if (needle[0] == 0)
		return ((char *)haystack);
	if (len == 0)
		return (0);
	while (haystack[i] && i < len)
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (needle[j] == haystack[i++])
				if (j++ == needle_len - 1)
					return ((char *)&haystack[i - j]);
		}
		i++;
	}
	return (0);
}
