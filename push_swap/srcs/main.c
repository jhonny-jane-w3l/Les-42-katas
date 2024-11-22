/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cw3l <cw3l@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:53:07 by cw3l              #+#    #+#             */
/*   Updated: 2024/11/22 17:53:19 by cw3l             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int main(int argc, char **argv)
{
    int *i;
    int j;
    int len;
    
    j = 0;
     if(!ft_validation_arg(&argv[1]))
     {
        len = number_of_int(argv);
        i = ft_parsing(&argv[1], len);
        int rep = ft_check_repetition(i, len);
        if(rep)
            print_str("il y a une repetion");
        else 
            print_str("il n'y a pas de repetition");
     }
    else
        print_str("ERROR\n");
    return (0);
}