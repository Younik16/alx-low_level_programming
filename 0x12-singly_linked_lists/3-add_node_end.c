#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - function that adds a new node
 * at the end of a list_t list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *glue;
	list_t *link = *head;
	unsigned int len1 = 0;

	while (str[len1])
		len1++;
	glue = malloc(sizeof(list_t));
	if (!glue)
		return (NULL);
	glue->str = strdup(str);
	glue->len = len1;
	glue->next = NULL;
	if (*head == NULL)
	{
		*head = glue;
		return (glue);
	}
	while (link->next)
		link = link->next;
	link->next = glue;
	return (glue);
}
