/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cw3l <cw3l@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 03:32:50 by cw3l              #+#    #+#             */
/*   Updated: 2024/09/19 05:02:33 by cw3l             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int int_len(int n)
{
    int i;

    i = 0;
    if (n < 0)
    {
        // if n is negatif, convert to positif
        n = -n;
        // i++ for the negativ sign in string
        i++;
    }
    while (n > 0)
    {
        n = n / 10;
        i++;
    }
    return(i);
}


void    process_data(char *str, int n, int len)
{

    int i;
    int is_negatif;

    i = len - 1;
    is_negatif = 0;
    printf("debut du process : n = %d et len = %d\n",n, len);
    if (n < 0)
    {
        n = -n;
        is_negatif += 1;    
    }

    while (n >= 1)
    {
        str[i] = n % 10 + '0';
        printf("%d\n",i);
        printf("voici la string %s\n", str);
        n = n / 10;
        i--;
    }
    if (is_negatif)
        str[i] = '-';
    str[len+1] = '\0';
    printf("voici la string %s\n", str);
}

char    *ft_itoa(int n)
{
  
    int len;
    char *ptr;
    len = int_len(n);
    
    printf("la taille du texte est :%d\n", len);
    ptr = malloc(sizeof(char) * (len + 1));
    if (!ptr)
        return (NULL);
    process_data(ptr,n,len);
    return(ptr);
}