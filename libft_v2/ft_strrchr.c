/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cw3l <cw3l@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 03:58:54 by cw3l              #+#    #+#             */
/*   Updated: 2024/09/17 04:19:55 by cw3l             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*count;

	i = 0;
	count = NULL;
	while (s[i])
	{
		if (s[i] == (char)c)
			count = (char *)&s[i];
		i++;
	}
	if (count != NULL)
		return (count);
	if (c == '\0')
		return ((char *)&s[i]);
	return (0);
}
