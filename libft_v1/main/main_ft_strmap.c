#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char ft_toupper_wrapper(unsigned int i, char c)
{
    if (i % 2 != 0)
    {
        c = ft_tolower(c);
    }
   
    printf("voici le caractere %c\n", c);
    return (c);
}

int main() {
    //char  buf[] = "s1lu3dwq***tn*les***etudiants*";
    //char  buf2[] = "s0lu3dwq***tn*les***etudiants*";
   
   
    char dest_str[] = "GSHHDEO"; 
	//char src_str[] = "Tutors";
    char *d;
	d = ft_strmapi(dest_str, ft_toupper_wrapper);
    printf("voici la string : %s\n", d);
    return 0;
}
