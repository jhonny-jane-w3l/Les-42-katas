#include "./../libft.h"

int main(void)
{
	char **result;
	int i;

	result = ft_split("voici le test de split", ' ');  // Test avec un espace comme délimiteur
	if (!result)
	{
		printf("Allocation échouée\n");
		return (1);
	}

	// Affichage des sous-chaînes et libération de la mémoire
	i = 0;
	while (result[i])
	{
		printf("Word %d: %s\n", i, result[i]);
		free(result[i]);  // Libération de chaque sous-chaîne
		i++;
	}
	free(result);  // Libération du tableau de sous-chaînes
	return (0);
}