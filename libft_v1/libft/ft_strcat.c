/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cw3l <cw3l@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 21:30:56 by cw3l              #+#    #+#             */
/*   Updated: 2024/07/29 15:51:54 by cw3l             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t	len_src;
	size_t	len_dest;

	len_src = ft_strlen(s2);
	len_dest = ft_strlen(s1);
	ft_strncpy(&s1[len_dest], s2, len_src);
	return (s1);
}
