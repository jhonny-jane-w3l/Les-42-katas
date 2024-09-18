/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cw3l <cw3l@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 07:00:30 by cw3l              #+#    #+#             */
/*   Updated: 2024/09/18 08:41:26 by cw3l             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	number_of_word(char const *s, char c)
{
	size_t	i;
	int		count;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			while (s[i] && s[i] != c)
				i++;
			count++;
		}
		i++;
	}
	return (count);
}

int	ft_safe_alloc(char **p, int i, size_t size)
{
	int	j;

	p[i] = malloc((size + 1) * sizeof(char));
	if (p[i] == NULL)
	{
		j = 0;
		while (j < i)
			free(p[j++]);
		return (0);
	}
	return (1);
}

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
		ft_strlcpy(p[i], &s[t - size], size +1);
		i++;
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	size_t	word;

	word = number_of_word(s, c);
	ptr = malloc((word * sizeof(char *)) + 1);
	if (ptr == NULL)
		return (NULL);
	ft_alloc_cpy(ptr, s, c);
	return (ptr);
}
