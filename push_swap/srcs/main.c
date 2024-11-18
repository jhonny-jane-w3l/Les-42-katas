/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cw3l <cw3l@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:53:07 by cw3l              #+#    #+#             */
/*   Updated: 2024/11/18 15:07:16 by cw3l             ###   ########.fr       */
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

int main(int argc, char **argv)
{

    if(!validation_arg(&argv[1]))
        print_str("test ok\n");
    else
        print_str("test KO\n");
    
    return (0);
}