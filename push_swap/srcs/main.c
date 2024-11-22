/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cw3l <cw3l@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:53:07 by cw3l              #+#    #+#             */
/*   Updated: 2024/11/22 18:17:57 by cw3l             ###   ########.fr       */
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
    while (i < len)
        printf("voici l'entier %d\n", arr[i++]);
}

int *ft_init_progr(char **argv)
{
    int len;
    int *arr;
    if(!ft_validation_arg(&argv[1]))
    {
        len = number_of_int(argv);
        arr = ft_parsing(&argv[0], len);
        int rep = ft_check_repetition(arr, len);
        if(rep)
            return(NULL);
        else 
            return(arr);
    }
    return (NULL);    
}

int main(int argc, char **argv)
{
    int *i;
    
    if (argc < 2)
        return (ft_print_error());
    int *arr = ft_init_progr(&argv[1]);
    if (!arr)
        return (ft_print_error());
    else
    
    return (0);
}