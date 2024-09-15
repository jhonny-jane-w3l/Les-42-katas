/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cw3l <cw3l@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:59:47 by cw3l              #+#    #+#             */
/*   Updated: 2024/09/15 07:08:13 by cw3l             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_is_upper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}

static int	ft_is_lower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

int	ft_isalpha(int c)
{
	if (ft_isupper(c) == 1 || ft_lower(c) == 1)
		return (1);
	return (0);
}
