#include <stdio.h>
#include <string.h>
#include "libft.h"

int main() {
    
    char txt[] = "helledw";
    char txt2[] = "le";
    
    //char *p = ft_strnstr(txt,txt2,2);
    char *c = strnstr(txt,txt2,6);
    //printf("%p\n",p);
    printf("%p\n",c);
    ft_putendl(c);

    c = ft_strnstr(txt,txt2,6);
    printf("%p\n",c);
    ft_putendl(c);
    
    return 0;
} 