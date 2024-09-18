#include <stdio.h>
#include <string.h>

#include "./../libft.h"




int main(void)
{
    unsigned char data[] = {0x01, 0x02, 0x04, 0x05};
    unsigned char *result = ft_memchr(data, 3, sizeof(data));  // Recherche du byte 0x03

    if (result != NULL)
        printf("Byte trouvé : 0x%x\n", *result);
    else
        printf("Byte non trouvé.\n");

    return 0;
}
