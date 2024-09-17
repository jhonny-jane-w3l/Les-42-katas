/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cw3l <cw3l@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 23:56:52 by cw3l              #+#    #+#             */
/*   Updated: 2024/09/18 00:00:40 by cw3l             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strndup(const char *s1, size_t n)
{
	char	*ptr;

	ptr = malloc(sizeof(char) * (n + 1));
	if (ptr == NULL)
		return (0);
	ft_strlcpy(ptr, s1, n+ 1);
	return (ptr);
}