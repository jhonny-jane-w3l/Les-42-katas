/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation_arg_unit.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cw3l <cw3l@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:14:58 by cw3l              #+#    #+#             */
/*   Updated: 2024/11/24 08:43:48 by cw3l             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include "../include/test.h"
#include "../include/push_swap.h"


#define SIZE(arr) sizeof(arr) / sizeof(arr[0])

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

int	get_high_and_low(int *arr, int size, int *l, int *h)
{
	int i;

	i = 1;
	*l = arr[0];
	*h = arr[0];
	while (i < size)
	{
		if (arr[i] < *l)
			*l = arr[i];
		else if (arr[i] > *h)
			*h = arr[i];
		i++;
	}
	return (0);
}
void quick(int *arr, int len)
{
	int i = 0;
	int j = len - 1;
	int tmp = 0;

	ft_print_arr(arr, len);
	if (i < j)
	{
		int pivot = (len - 1) / 2;
		printf("voici le pivot %d\n", arr[pivot]);
		ft_print_arr(arr, len);	
		while (arr[i] > arr[pivot])
		{
			tmp = arr[i];
			arr[i] = arr[pivot];
			arr[pivot] = tmp;
			i++;
		}
		while (arr[j] < arr[pivot])
		{
			tmp = arr[j];
			arr[j] = arr[pivot];
			arr[pivot] = tmp;
			j--;
		}
		
	}
	ft_print_arr(arr, len);
}

 
int    main()
{
	int arr[] = {-4, 7, 8, -2, 33, 44, 5, -7};
	//int arr[] = {-7, -2, 4, 5 , 8 , 33, 44, 150, 170, 19};
	
	int size = SIZE(arr);
	int low;
	int high;
	printf("voici la size %d\n", 11 / 2);

	printf("la plus petite valeur est %d\n", get_low(arr, size) );
	printf("la plus grande valeur est %d\n", get_high(arr, size) );

	get_high_and_low(arr, size, &low, &high);
	printf("voici la valeur de high : %d, voic la valeur de low %d et la valeur mediane %d\n", low, high, (low + high + arr[(size / 2) - 1]) / 3);
	if (ft_is_sort(arr, size))
		print_str("Le tableau n'es pas trier\n");
	else
		print_str("le tableau est trié \n");
	
	quick(arr,size);
	return (0);
}