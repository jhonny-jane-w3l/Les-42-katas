/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstiter.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cw3l <cw3l@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 11:49:19 by cw3l              #+#    #+#             */
/*   Updated: 2024/11/21 17:05:57 by cw3l             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int main(void)
{
    int i = 0;
    //int on_off;
    //on_off = 0;
    i = 0;
    char *txt = "   helllo   comment   sa   va";

    while (txt[i] != '\0')
    {
        while(txt[i])
            i++;
        // if(txt[i] == 32 && on_off == 0)
        // {
        //     char c = 32;
        //     write(1, &c, 1);
        //     on_off = 1;
        // }
        // else if(txt[i] != 32)
        // {
            
        //     char d = txt[i];
        //     write(1, &d, 1);
        //     on_off = 0;
        // }
        i++;
    }
    
    return (0);
}