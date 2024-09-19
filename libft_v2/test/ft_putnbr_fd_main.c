#include "./../libft.h"

#include <stdlib.h>

int main(void) {
    // Cas de test avec différents nombres

    int test_values[] = {
        0,           // Cas spécial du zéro
        12345,       // Nombre positif
        -12345,      // Nombre négatif
        INT_MAX,     // Valeur maximale pour un int
        INT_MIN,     // Valeur minimale pour un int
        -1,          // Petit nombre négatif
        42,          // Petit nombre positif
    };
    

    // Taille du tableau de cas de test
    int num_tests = sizeof(test_values) / sizeof(test_values[0]);
    
    // Boucle sur chaque valeur de test
    for (int i = 0; i < num_tests; i++) {
        int value = test_values[i];
        ft_putnbr_fd(value,1);  // Convertit le nombre en chaîne
        ft_putchar_fd('\n',1);  // Convertit le nombre en chaîne
    }

    return 0;
}