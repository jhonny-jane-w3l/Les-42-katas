/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cw3l <cw3l@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:02:02 by cw3l              #+#    #+#             */
/*   Updated: 2024/11/22 17:31:30 by cw3l             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void    ft_fill_process(char **argv, int *arr)
{
    char **split;
    int i;

    i = 0;
    while (*argv)
    {
        if(ft_are_space(*argv))
        {
            split = ft_split(*argv, 32);
            while (*split)
            {
                *arr = ft_atoi(*split);
                free(*split);
                split++;
                arr++;
            }
        }
        else
        {
            *arr = ft_atoi(argv[i]);
            arr++;
        }
        argv++;
    }
}

int *ft_parsing(char **argv, int len)
{
    int i;
    int *arr;
    char **split;

    arr = malloc(sizeof(int) * (len + 1));
    if (!arr)
        return (NULL);
    ft_fill_process(argv, arr);
    return (arr);
}

int number_of_int(char **argv)
{
    int i;
    int count;
    char **split;

    i = 0;
    count = 0;
    while (argv[i])
    {
        if(ft_are_space(argv[i]))
        {
            split = ft_split(argv[i], 32);
            while (*split)
            {
                count++;
                split++;
            }
        }
        else
            count++;
        i++;
 
    }
    return (count);
}

int ft_are_space(char *str)
{
    while (*str)
    {
        if(*str == 32)
            return(1);
        str++;
    }
    return (0);
}

int ft_check_repetition(char **argv)
{
    int i;
    int j;

    i = 0;
    while (argv[i])
    {
        j = i + 1;
        while (argv[j])
        {
            if(!ft_strncmp(argv[i], argv[j],ft_strlen(argv[i])))
            {
                printf("voici str1 %s et str2 %s \n",argv[i], argv[j]);
                return (1);
            }
            j++;
        }
        i++;
    }
    return (0);
    
}

int ft_validation_arg(char **argv)
{
    char *tmp;
    int digits;
    
    while (*argv)
    {
        tmp = *argv;
        digits = 0;
        while (*tmp)
        {
            if(!ft_isdigit(*tmp) && *tmp != 32 && *tmp != 45)
                return(1);
            if(ft_isdigit(*tmp))
                digits++;
            tmp++;
        }
        if (digits == 0)
            return (1);
        argv++;
    }
    return (0);  
}
