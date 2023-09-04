#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function to returns a pointer to a newly allocated space
 * @str: function parameter
 * Return: char
 */
char *_strdup(char *str)
{
	int i;
	char *duplicate;
	int length;

	if (str == NULL)
	return (NULL);

	length = 0;

	while (str[length] != '\0')
		length++;
	duplicate = malloc((length + 1) * sizeof(char));
	if (duplicate == NULL)
		return (NULL);
	for (i = 0; i <= length; i++)
		duplicate[i] = str[i];
	return (duplicate);
}
