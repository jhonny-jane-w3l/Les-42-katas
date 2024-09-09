
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Prototype de ft_strclr
void ft_strclr(char *s);

int main(void)
{
    // Allouer de la mémoire pour une chaîne de caractères
    char *str = (char *)malloc(20 * sizeof(char));
    if (str == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Initialiser la chaîne
    snprintf(str, 20, "Hello, World!");

    // Afficher la chaîne avant de l'effacer
    printf("Before ft_strclr: %s\n", str);

    // Appeler ft_strclr pour effacer la chaîne
    ft_strclr(str);

    // Afficher les valeurs ASCII des caractères après l'effacement
    printf("After ft_strclr: ");
    for (int i = 0; i < 20; i++)
    {
        printf("%d ", str[i]);
    }
    printf("\n");

    // Vérifier si tous les caractères ont été mis à zéro
    int cleared = 1;
    for (int i = 0; i < 20; i++)
    {
        if (str[i] != 0)
        {
            cleared = 0;
            break;
        }
    }

    if (cleared)
    {
        printf("All characters are cleared to zero.\n");
    }
    else
    {
        printf("Some characters are not zero.\n");
    }

    // Libérer la mémoire allouée
    free(str);

    return 0;
}