/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exercice_exam.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cw3l <cw3l@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 17:29:13 by cw3l              #+#    #+#             */
/*   Updated: 2024/11/22 14:13:06 by cw3l             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void analyse_str(char *str)
{
    while (*str)
    {
        printf("%d\n", *str);
        str++;
    }
    
}
int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
    
}

void    ft_strlcpy(char *dest, char *src, int len)
{
    int i;

    i = 0;
    while (i < len - 1)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

char *ft_strtrim(char *str)
{
    int i;
    int len;

    i = 0;
    len = ft_strlen(str);
    while (str[i] == 32)
        i++;
    while (str[len - 1] == 32)
        len--;
    char *n = malloc(sizeof(char) * ((len - i) + 1));
    ft_strlcpy(n, &str[i], (len - i) + 1);
    return (n);
}

void ft_display(char *str)
{
    int on;

    on = 0;
    while (*str)
    {
        if(*str != 32)
        {
            write(1, &(*str), 1);
            on = 0;
        }
        else if (*str == 32 && on == 0)
        {
            char c = 32;
            write(1, &c, 1);
            on = 1;
        }
        str++;
    }
    
}
int main(int argc, char **argv)
{
    (void)argc;
    char *new = ft_strtrim(argv[1]);
    ft_display(new);
    new = NULL;
    free(new);
    return (0);
}