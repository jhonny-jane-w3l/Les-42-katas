/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cw3l <cw3l@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 03:32:50 by cw3l              #+#    #+#             */
/*   Updated: 2024/09/19 12:22:23 by cw3l             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	int_len(int n, int *is_neg)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		*is_neg = 1;
		i++;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static void	process_data(char *str, int n, int len, int is_negatif)
{
	int	i;

	i = len - 1;
	if (n < 0)
		n = -n;
	if (n == 0)
	{
		str[i] = '0';
	}
	else
	{
		while (n >= 1)
		{
			str[i] = n % 10 + '0';
			n = n / 10;
			i--;
		}
		if (is_negatif)
			str[i] = '-';
	}
	str[len +1] = '\0';
}

char	*ft_itoa(int n)
{
	int		len_memory;
	int		is_negatif;
	char	*ptr;

	if (n == INT_MIN)
	{
		ptr = malloc(sizeof(char) * 12);
		if (!ptr)
			return (NULL);
		ft_strlcpy(ptr, "-2147483647", 12);
	}
	else
	{
		is_negatif = 0;
		len_memory = int_len(n, &is_negatif);
		ptr = malloc(sizeof(char) * (len_memory + 1));
		if (!ptr)
			return (NULL);
		process_data(ptr, n, len_memory, is_negatif);
	}
	return (ptr);
}
