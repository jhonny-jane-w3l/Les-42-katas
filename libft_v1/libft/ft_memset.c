/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cw3l <cw3l@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 01:29:01 by cw3l              #+#    #+#             */
/*   Updated: 2024/08/07 02:03:41 by cw3l             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char		*d;
	size_t		i;

	i = 0;
	d = b;
	while (i < len)
	{
		d[i] = c;
		i++;
	}
	return (b);
}

// doute faut t'il mettre le dernier caractere. update. pas de dernier caractere.
