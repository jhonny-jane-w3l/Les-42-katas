#include <stdio.h>
#include <string.h>

#include "./../libft.h"

int main(void)
{
    unsigned char data[] = "hellos";
    unsigned char data2[] = "hellos";
    int result = ft_memcmp(data,data2, 10);  // Recherche du byte 0x03

     printf("Byte trouvé : %d\n", result);
    if (result == 0)
        printf("Byte trouvé : %d\n", result);
    else
        printf("Byte non trouvé.\n");

    return 0;
}
