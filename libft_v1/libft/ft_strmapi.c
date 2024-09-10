/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cw3l <cw3l@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 13:57:02 by cw3l              #+#    #+#             */
/*   Updated: 2024/07/29 20:19:51 by cw3l             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*ptr;
	int		j;

	if (*s)
	{
		i = ft_strlen(s);
		ptr = ft_memalloc(i + 1);
		j = 0;
		while (s[j])
		{
			ptr[j] = f(j, s[j]);
			j++;
		}
		ptr[j] = '\0';
		return (ptr);
	}
	return (0);
}
