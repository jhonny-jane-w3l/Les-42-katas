/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cw3l <cw3l@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 19:37:43 by cw3l              #+#    #+#             */
/*   Updated: 2024/11/24 20:31:36 by cw3l             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int get_high(int *arr, int size)
{
	int i;
	int high;

	i = 1;
	high = arr[0];
	while (i < size)
	{
		if (arr[i] > high)
			high = arr[i];
		i++;
	}
	return (high);
}
int get_low(int *arr, int size)
{
	int i;
	int low;

	i = 1;
	low = arr[0];
	while (i < size)
	{
		if (arr[i] < low)
			low = arr[i];
		i++;
	}
	return (low);
}

int get_low_idx(int *arr, int size)
{
	int i;
	int low;

	i = 1;
	low = arr[0];
	while (i < size)
	{
		if (arr[i] < low)
			low = i;
		i++;
	}
	return (low);
}