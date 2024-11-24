/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cw3l <cw3l@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 11:23:29 by cw3l              #+#    #+#             */
/*   Updated: 2024/11/24 20:39:07 by cw3l             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

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

    if(stack)
    {
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
}

void    ft_reverse_rotate(int *stack, int len)
{
    int tmp;
    int i;

    if(stack)
    {
        i = 0;
        len = len - 1;
        tmp = stack[len];
        while (len > 0)
        {
            stack[len] = stack[len - 1];
            len--;
        }
        stack[len] = tmp;
    }
    //ft_print_arr(stack, len);
}

void ft_pushy(int *dest, int *src,int *len_dest, int *len_src)
{
    int i;
    int tmp;

    i = 0;
    tmp = 0;
    if(*len_dest >= 0)
    {
        ft_memmove(dest + 1, dest, *len_dest * sizeof(int));
        dest[0] = src[0];
        ft_memmove(src, src + 1, (*len_src - 1) * sizeof(int));
        (*len_src)--;
        (*len_dest)++;
        
    }
    
}