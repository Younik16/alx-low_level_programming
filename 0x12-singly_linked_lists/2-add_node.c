#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - function that adds a new node
 * at the beginning of a list_t list
 * @head: This is a double pointer to the list_t list
 * @str: It is a  new string to add in the node
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *luck;
	unsigned int len1 = 0;

	while (str[len1])
		len1++;
	luck = malloc(sizeof(list_t));
	if (!luck)
		return (NULL);
	luck->str = strdup(str);
	luck->len = len1;
	luck->next = (*head);
	(*head) = luck;
	return (*head);
}
