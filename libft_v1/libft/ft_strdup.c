/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cw3l <cw3l@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 16:13:23 by cw3l              #+#    #+#             */
/*   Updated: 2024/07/29 21:44:22 by cw3l             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*dest;

	len = ft_strlen(s1);
	dest = malloc((len + 1) * sizeof(char));
	if (dest == NULL)
	{
		return (NULL);
	}
	ft_strcpy(dest, (char *)s1);
	return (dest);
}
