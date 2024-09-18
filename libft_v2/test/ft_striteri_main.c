#include <stdio.h>
#include "./../libft.h"


void to_uppercase(unsigned int index, char *c)
{
    (void)index; 
    *c = ft_toupper(*c);  
}

int main(void)
{
    char str[] = "voici le text";  

    printf("Avant ft_striteri: %s\n", str);

    ft_striteri(str, to_uppercase);

    printf("Après ft_striteri: %s\n", str);  
    return 0;
}
