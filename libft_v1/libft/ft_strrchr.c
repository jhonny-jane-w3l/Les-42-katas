/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cw3l <cw3l@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 02:20:01 by cw3l              #+#    #+#             */
/*   Updated: 2024/07/29 21:45:48 by cw3l             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	ptr = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			ptr = (char *)&s[i];
		}
		i++;
	}
	return ((char *)ptr);
}

//The strrchr() function is identical to strchr(),
// except it locates the last occurrence of c.
