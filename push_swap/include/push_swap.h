/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cw3l <cw3l@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:56:20 by cw3l              #+#    #+#             */
/*   Updated: 2024/11/23 19:36:44 by cw3l             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "../include/ft_printf.h"
#include "../include/libft.h"

int     ft_validation_arg(char **argv);
int     ft_check_repetition(int *arr, int len);
int     ft_are_space(char *str);
int     number_of_int(char **argv);
void    ft_fill_process(char **argv, int *arr);
int     *ft_parsing(char **argv, int len);
void    ft_print_arr(int *arr, int len);
int     get_high(int *arr, int size);
int     get_low(int *arr, int size);

//instruction
void    ft_swap(int *stack);
void    ft_rotate(int *stack, int len);
void    ft_reverse_rotate(int *stack, int len);



#endif
