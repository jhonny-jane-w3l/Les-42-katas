/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cw3l <cw3l@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:53:07 by cw3l              #+#    #+#             */
/*   Updated: 2024/11/23 21:11:53 by cw3l             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int ft_print_error()
{
    write(1, "ERROR", 5);
    return (1);
}

void    ft_print_arr(int *arr, int len)
{
    int i;

    i = 0;
    while (arr && i < len - 1)
        printf("%d", arr[i++]);
    printf("\n");
}

int ft_init_progr(char **argv, int *arr)
{
    int len;

    if(!ft_validation_arg(&argv[1]))
    {
        len = number_of_int(argv);
        arr = ft_parsing(&argv[0], len);
        int rep = ft_check_repetition(arr, len);
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

    lst_b = malloc(sizeof(int) * len);
    if (!lst_b)
        exit(1);
    ft_print_arr(a, len);
    ft_reverse_rotate(a, len);
    ft_print_arr(a, len);
    ft_rotate(a, len);

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
        printf("voici le taux de trie %d\n",tx);
        ft_push_swap(arr, len);
    }
    return (0);
}