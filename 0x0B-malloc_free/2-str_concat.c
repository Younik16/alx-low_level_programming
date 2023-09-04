#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings
 * @s1: pointer to string
 * @s2: pointer to second string
 * Return: string
 */

char *str_concat(char *s1, char *s2)
{
	int len1 = 0;
	int len2 = 0;
	int i;
	char *concatenated;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	concatenated = malloc((len1 + len2 + 1) * sizeof(char));
	if (concatenated == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		concatenated[i] = s1[i];
	for (i = 0; i < len2; i++)
		concatenated[len1 + i] = s2[i];
	concatenated[len1 + len2] = '\0';
	return (concatenated);
}
