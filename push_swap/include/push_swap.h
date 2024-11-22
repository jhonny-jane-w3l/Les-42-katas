/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cw3l <cw3l@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:56:20 by cw3l              #+#    #+#             */
/*   Updated: 2024/11/22 17:44:50 by cw3l             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "../include/ft_printf.h"
#include "../include/libft.h"

int ft_validation_arg(char **argv);
int ft_check_repetition(int *arr, int len);
int ft_are_space(char *str);
int number_of_int(char **argv);
void    ft_fill_process(char **argv, int *arr);
int *ft_parsing(char **argv, int len);



#endif
