#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the pointer of the first node
 * @str: string to store in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *current;

	if (!head)
	return NULL;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
	return NULL;

	new_node->str = strdup(str);
	if (!new_node->str)
	{
	free(new_node);
	return NULL;
	}

	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)  /* La liste est vide */
	{
	*head = new_node;
	return new_node;
	}

    /* Parcourir jusqu’au dernier nœud */
	current = *head;
	while (current->next != NULL)
	current = current->next;

	current->next = new_node;

	return new_node;
}

