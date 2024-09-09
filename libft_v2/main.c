#include <stdio.h>
#include <string.h>

int main() {
    char source[] = "Hello";
    char destination[20];

    // Auto-complétion pour la fonction strcpy
    strcpy(destination, source);
    

    printf("La chaîne copiée est : %s\n", destination);

    // Auto-complétion pour strlen
        int longueur = strlen(source);

    printf("Longueur de la chaîne : %d\n", longueur);

    return 0;
}
