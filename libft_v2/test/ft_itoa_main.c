#include "./../libft.h"

int main(void) {
    // Cas de test avec différents nombres

	printf("%d\n", INT_MIN);
	
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
        char *result = ft_itoa(value);  // Convertit le nombre en chaîne
        
        // Vérifie si la conversion a réussi
        if (result != NULL) {
            printf("ft_itoa(%d) = %s\n", value, result);
            free(result);  // Libère la mémoire allouée par ft_itoa
        } else {
            printf("ft_itoa(%d) a échoué\n", value);
        }
    }

    return 0;
}