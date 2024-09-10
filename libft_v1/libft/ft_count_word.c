/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_word.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cw3l <cw3l@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 10:22:33 by cw3l              #+#    #+#             */
/*   Updated: 2024/07/28 10:23:21 by cw3l             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count_word(char const *s, char c )
{
	int		button;
	size_t	word;
	size_t	t;

	word = 0;
	button = 0;
	t = 0;
	while (s[t])
	{
		button = 0;
		while (s[t] && s[t] == c)
			t++;
		while (s[t] && s[t] != c)
		{
			if (button == 0)
			{
				word++;
				button = 1;
			}
			t++;
		}
	}
	return (word);
}
