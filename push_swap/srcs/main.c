/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cw3l <cw3l@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:53:07 by cw3l              #+#    #+#             */
/*   Updated: 2024/11/22 20:12:25 by cw3l             ###   ########.fr       */
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
        printf("%d", arr[i++]);
    printf("\n");
}

int *ft_init_progr(char **argv)
{
    int *arr;
    int len;

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

void    ft_swap(int *stack)
{
    int tmp;

    if(stack)
    {
        tmp = stack[0];
        stack[0] = stack[1];
        stack[1]= tmp;
    }
}

void    ft_rotate(int *stack, int len)
{
    int tmp;
    int i;

    i = 0;
    tmp = stack[0];
    
    while (i < len - 1)
    {
        stack[i] = stack[i + 1];
        i++;
    }
    stack[i] = tmp;
    ft_print_arr(stack, len);
}

void    ft_reverse_rotate(int *stack, int len)
{
    int tmp;
    int i;

    i = 0;
    len = len - 1;
    tmp = stack[len];
    while (len > 0)
    {
        stack[len] = stack[len - 1];
        len--;
    }
    stack[len] = tmp;
    ft_print_arr(stack, len);
}
void    ft_push_swap(int *a, int len)
{
    int *b;

    b = malloc(sizeof(int) * len);
    if (!b)
        exit(1);
    ft_reverse_rotate(a, len);
    ft_print_arr(a, len);

}

int main(int argc, char **argv)
{
    int *i;
    int len;
    
    if (argc < 2)
        return (ft_print_error());
    len = number_of_int(&argv[1]);
    int *arr = ft_init_progr(&argv[1]);
    if (!arr)
        return (ft_print_error());
    else
        ft_push_swap(arr, len);
    return (0);
}