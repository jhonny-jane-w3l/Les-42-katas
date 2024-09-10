/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cw3l <cw3l@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 02:02:07 by cw3l              #+#    #+#             */
/*   Updated: 2024/08/07 03:15:06 by cw3l             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	return (0);
}

//The strchr() function locates the first occurrence 
//of c (converted to a char) in the string pointed to by s.  
//The terminating null character is considered 
//to be part of the string; 
//therefore if c is ‘\0’, the functions locate the terminating ‘\0’.