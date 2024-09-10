/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cw3l <cw3l@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 10:45:14 by cw3l              #+#    #+#             */
/*   Updated: 2024/07/29 20:13:46 by cw3l             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
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
			ptr[j] = f(s[j]);
			j++;
		}
		ptr[j] = '\0';
		return (ptr);
	}
	return (0);
}
