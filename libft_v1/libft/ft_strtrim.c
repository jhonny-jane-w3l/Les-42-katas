/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cw3l <cw3l@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 18:27:35 by cw3l              #+#    #+#             */
/*   Updated: 2024/07/29 21:45:28 by cw3l             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*r ;
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(s) - 1;
	r = NULL;
	while (s[j] == 10 || s[j] == 11 || s[j] == 32)
		j--;
	while (s[i] == 10 || s[i] == 11 || s[i] == 32)
		i++;
	r = ft_memalloc(j - i +2);
	if (r == NULL)
		return (NULL);
	ft_strncpy(r, &s[i], j - i +1);
	return (r);
}
