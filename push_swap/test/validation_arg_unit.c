/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation_arg_unit.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cw3l <cw3l@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:14:58 by cw3l              #+#    #+#             */
/*   Updated: 2024/11/22 17:00:21 by cw3l             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include "../include/test.h"
#include "../include/push_swap.h"

int number_of_int(char **argv)
{
    int i;
    int count;
    char **split;

    i = 0;
    count = 0;
    while (argv[i])
    {
        if(ft_are_space(argv[i]))
        {
            split = ft_split(argv[i], 32);
            while (*split)
            {
                count++;
                split++;
            }
        }
        else
            count++;
        i++;
 
    }
    return (count);
}

int    main()
{
    char *argv[5];
    char **split;
    int i;
    int j;
    int *arr = NULL;
    int len ;

    i = 0;
    len = 0;

    argv[0] = "1 2 3 4 5" ;
    argv[1] = "10";
    argv[2] = "10 55 32   22";
    argv[3] = NULL;
    len = number_of_int(argv);
    arr = malloc(sizeof(int) * (len + 1));
    
    j = 0;
    if (!arr)
        return (-1);
    
    while (argv[i])
    {
        if(ft_are_space(argv[i]))
        {
            split = ft_split(argv[i], 32);

            while (*split)
            {
                arr[j] = ft_atoi(*split);
                free(*split);
                split++;
                j++;
            }
        }
        else
        {
            arr[j] = ft_atoi(argv[i]);
            j++;
        }
        i++;
 
    }
    i = 0;

    while (i < len)
    {
        print_int(arr[i]);
        i++;
    }
    return (0);
}