/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cw3l <cw3l@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 09:29:30 by cw3l              #+#    #+#             */
/*   Updated: 2024/09/17 23:40:52 by cw3l             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	needle_len;

	i = 0;
	needle_len = ft_strlen(needle);
	if (needle[0] == 0)
		return ((char *)haystack);
	while (i < len && haystack[i])
	{
		if (haystack[i] == needle[0])
		{
			ft_strncmp(&haystack[i], needle, needle_len);
			if (ft_strncmp(&haystack[i], needle, needle_len) == 0)
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (0);
}
