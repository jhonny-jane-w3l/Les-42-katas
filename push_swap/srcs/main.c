/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cw3l <cw3l@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:53:07 by cw3l              #+#    #+#             */
/*   Updated: 2024/11/24 20:47:55 by cw3l             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int ft_print_error()
{
    write(1, "ERROR", 5);
    return (1);
}



int ft_init_progr(char **argv, int **arr)
{
    int len;

    if(!ft_validation_arg(&argv[1]))
    {
        len = number_of_int(argv);
        *arr = ft_parsing(&argv[0], len);
        int rep = ft_check_repetition(*arr, len);
        if(rep == -1)
            return(-1);
        else 
            return(rep);
    }
    return (-1);    
}
void ft_push(int *dst, int *src,  int len)
{
    int value = src[0];

}

void    ft_push_swap(int *a, int len)
{
    int *lst_b;
    int len_b;
    int low;
    int count;

    lst_b = malloc(sizeof(int) * len);
    len_b = 0;
    count = 0;
    if (!lst_b)
        exit(1);
    while (len > 1)
    {
        low = get_low_idx(a ,len);
        if (low < (len -1) / 2)
        {
            while (a[0] !=  get_low(a, len))
            {
                /* ra */
                ft_rotate(a, len);
                write(1, "ra", 2);
                write(1, "\n", 1);
                count++;
            }
            ft_pushy(lst_b, a, &len_b, &len);
            write(1, "pb", 2);
            write(1, "\n", 1);
            count++;
        }
        else
        {
            while (a[0] !=  get_low(a, len))
            {
                /* ra */
                ft_reverse_rotate(a, len);
                write(1, "rra", 3);
                write(1, "\n", 1);
                count++;
            }
            ft_pushy(lst_b, a, &len_b, &len);
            write(1, "pb", 2);
            write(1, "\n", 1);
            count++;
        }
    }
    while (len_b > 0)
    {
        ft_pushy(a, lst_b, &len, &len_b);
        write(1, "pa", 2);
        write(1, "\n", 1);
        count++;
    
    }
    
    
    ft_print_arr(a, len);
    printf("voici le nombre d'instruction %d\n", count);
    

}

int main(int argc, char **argv)
{
    int *i;
    int len;
    int *arr;
    int tx;
    
    arr = NULL;
    if (argc < 2)
        return (ft_print_error());
    len = number_of_int(&argv[1]);
    tx = ft_init_progr(&argv[1], &arr);
    if (tx == -1)
        return (ft_print_error());
    else
    {
        ft_push_swap(arr, len);
    }
    return (0);
}