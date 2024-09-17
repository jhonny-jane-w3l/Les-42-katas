#include <stdio.h>
#include <string.h>

int main(void)
{
    unsigned char data[] = {0x01, 0x02, 0x03, 0x04, 0x05};
    unsigned char *result = memchr(data, 0x03, sizeof(data));  // Recherche du byte 0x03

    if (result != NULL)
        printf("Byte trouvé : 0x%x\n", *result);
    else
        printf("Byte non trouvé.\n");

    return 0;
}
