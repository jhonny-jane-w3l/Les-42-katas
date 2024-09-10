/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cw3l <cw3l@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 02:29:23 by cw3l              #+#    #+#             */
/*   Updated: 2024/07/29 16:15:37 by cw3l             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	len = ft_strlen(needle);
	if (len == 0)
		return ((char *)haystack);
	while (haystack[i])
	{
		if (haystack[i] == needle[j])
			j++;
		else if (haystack[i] != needle[j])
			j = 0;
		if (j == len)
			return ((char *)haystack + ((i - j) + 1));
		i++;
	}
	return (NULL);
}
