#include <stdlib.h>
#include <stdio.h>
#include "./../libft.h"


// Fonction de suppression du contenu (exemple simple)
void del_content(void *content)
{
    free(content);  // Libération du contenu alloué dynamiquement
}

int main(void)
{
    // Création d'une liste simple avec trois éléments
    t_list *head;
    char *data1 = malloc(sizeof(char) * 6);
    char *data2 = malloc(sizeof(char) * 6);
    char *data3 = malloc(sizeof(char) * 6);

    if (!data1 || !data2 || !data3)
        return (1);  // Vérifier que l'allocation a réussi

    // Initialisation des contenus
    sprintf(data1, "Elem1");
    sprintf(data2, "Elem2");
    sprintf(data3, "Elem3");

    // Création des nœuds de la liste
    head = ft_lstnew(data1);
    head->next = ft_lstnew(data2);
    head->next->next = ft_lstnew(data3);

    // Afficher la liste avant suppression
    printf("Avant suppression : \n");
    t_list *tmp = head;
    while (tmp)
    {
        printf("%s -> ", (char *)tmp->content);
        tmp = tmp->next;
    }
    printf("NULL\n");

    // Suppression de la liste
    ft_lstclear(&head, del_content);

    // Vérifier si la liste est bien supprimée
    if (!head)
        printf("Liste supprimée.\n");
    else
        printf("Erreur lors de la suppression.\n");

    return (0);
}
