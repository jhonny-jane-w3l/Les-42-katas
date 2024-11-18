/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cw3l <cw3l@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:02:02 by cw3l              #+#    #+#             */
/*   Updated: 2024/11/18 16:02:31 by cw3l             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int ft_validation_arg(char **argv)
{
    char *tmp;
    while (*argv)
    {
        tmp = *argv;
        while (*tmp)
        {
            if(!ft_isdigit(*tmp) && *tmp != 32 && *tmp != 45)
                return(1);
            tmp++;
        }
        argv++;
    }
    return (0);
}