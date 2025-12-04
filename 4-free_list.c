#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list
 * @head: pointer to the first node of the list
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
	tmp = head->next;   /* sauvegarde du prochain nœud */
	free(head->str);    /* libérer la chaîne */
	free(head);         /* libérer le nœud */
	head = tmp;         /* passer au nœud suivant */
	}
}

