/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strmapi.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cw3l <cw3l@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 10:46:07 by cw3l              #+#    #+#             */
/*   Updated: 2024/07/29 20:21:46 by cw3l             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <ctype.h>

char ft_toupper_wrapper(unsigned int i, char c)
{
    if (i % 2 != 0)
    {
        c = ft_toupper(c);
    }
    return (c);
}

int main()
{
    char dest_str[] = "voici le tesre"; 
	//char src_str[] = "Tutors";
    char *d;
	d = ft_strmapi(dest_str, ft_toupper_wrapper);
    printf("voici la string : %s\n", d);
}