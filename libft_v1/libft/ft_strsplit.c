/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cw3l <cw3l@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 14:08:03 by cw3l              #+#    #+#             */
/*   Updated: 2024/07/29 21:23:31 by cw3l             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_alloc_cpy(char **p, char const *s, char c)
{
	int		i;
	int		size;
	size_t	t;

	t = 0;
	i = 0;
	while (s[t])
	{
		size = 0;
		while (s[t] && s[t] == c)
			t++;
		while (s[t] && s[t] != c)
		{
			size++;
			t++;
		}
		ft_safe_alloc(p, i, size);
		ft_strncpy(p[i], &s[t - size], size);
		i++;
	}
	return (1);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**ptr;
	size_t	word;

	word = ft_count_word(s, c);
	ptr = ft_memalloc((word * sizeof(char *)) + 1);
	if (ptr == NULL)
		return (NULL);
	ft_alloc_cpy(ptr, s, c);
	return (ptr);
}
