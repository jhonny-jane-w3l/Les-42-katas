#include <stdio.h>
#include <string.h>

#include "./../libft.h"

int main(void)
{
    unsigned char data[] = { 0x02, 0x04, 0x05};
    unsigned char data2[] = {0x04, 0x05};
    int result = ft_memcmp(data,data2, 0);  // Recherche du byte 0x03

     printf("Byte trouvé : %d\n", result);
    if (result == 0)
        printf("Byte trouvé : %d\n", result);
    else
        printf("Byte non trouvé.\n");

    return 0;
}
