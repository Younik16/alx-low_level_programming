#include "main.h"
#include <ctype.h>
/**
 * string_toupper - C program to convert characters toupper
 * @str: pointer to string
 * Return: to upper
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
	str[i] = toupper(str[i]);
	i++;
	}
	return (str);
}
