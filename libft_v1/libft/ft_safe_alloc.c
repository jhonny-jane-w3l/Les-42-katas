/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_safe_alloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cw3l <cw3l@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 10:38:12 by cw3l              #+#    #+#             */
/*   Updated: 2024/07/28 10:40:08 by cw3l             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_safe_alloc(char **p, int i, size_t size)
{
	int	j;

	p[i] = ft_memalloc((size + 1) * sizeof(char));
	if (p[i] == NULL)
	{
		j = 0;
		while (j < i)
			free(p[j++]);
		return (0);
	}
	return (1);
}
