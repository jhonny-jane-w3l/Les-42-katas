/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cw3l <cw3l@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 04:16:29 by cw3l              #+#    #+#             */
/*   Updated: 2024/09/18 05:32:26 by cw3l             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_size_alloc(char const *src, char const *set)
{
	size_t	i;
	size_t	j;
	int		counter;
	int		is_set;

	i = 0;
	counter = 0;
	while (src[i])
	{
		j = 0;
		is_set = 0;
		while (set[j] && is_set == 0)
		{
			if (src[i] == set[j])
			{
				is_set++;
				counter++;
			}
			j++;
		}
		i++;
	}
	return (counter);
}

static void	_process(char *dst, char const *src, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	k;
	int		is_set;

	i = 0;
	k = 0;
	while (src[i])
	{
		j = 0;
		is_set = 0;
		while (set[j] && is_set == 0)
		{
			if (src[i] == set[j])
				is_set = 1;
			j++;
		}
		if (is_set == 0)
			dst[k++] = src[i];
		i++;
	}
	dst[k] = '\0';
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		size_alloc;
	char	*ptr;

	size_alloc = (ft_strlen(s1) - ft_size_alloc((char *)s1, (char *)set));
	ptr = malloc(sizeof(char) * size_alloc + 1);
	if (ptr == NULL)
		return (NULL);
	_process(ptr, s1, set);
	return (ptr);
}
