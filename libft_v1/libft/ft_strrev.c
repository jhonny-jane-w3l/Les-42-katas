/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cw3l <cw3l@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 18:15:51 by cw3l              #+#    #+#             */
/*   Updated: 2024/07/29 16:16:08 by cw3l             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strrev(char *src)
{
	char	buffer[1];
	size_t	len;
	size_t	i;

	len = ft_strlen(src) -1;
	i = 0;
	while (i < len)
	{
		buffer[0] = src[len];
		src[len] = src[i];
		src[i] = buffer[0];
		i++;
		len--;
	}
}
