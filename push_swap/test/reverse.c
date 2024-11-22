/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cw3l <cw3l@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:48:39 by cw3l              #+#    #+#             */
/*   Updated: 2024/11/20 21:10:19 by cw3l             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_isupper(char c)
{
    if(c >= 65 && c <= 90)
        return(1);
    return (0);
}

int ft_is_digit(char c)
{
    if(c >= 65 && c <= 122)
        return (1);
    return (0);
}

int main(int argc, char **argv)
{
    char new_c ;
    int i;
    int j;

    i = 1;
    j = 0;
    if (argc < 2)
        write(1,"\n",1);
    while (i <= argc - 1)
    {
        while (argv[i][j])
        {
            if(ft_isupper(argv[i][j]) && ft_is_digit(argv[i][j]))
            {
                new_c = argv[i][j] + 32;
                write(1,&new_c,1);

            }
            else if (ft_is_digit(argv[i][j]))
            {
                new_c = argv[i][j]- 32;
                write(1,&new_c,1);

            }
            else
                write(1,&argv[i][j],1);
            j++;
        }
        i++;
    }
    return (0);
}