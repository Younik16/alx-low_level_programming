#include "main.h"
#include <string.h>
/**
 * *_strcat - C program to concatenate two strings
 * @dest: pointer to destination string
 * @src: pointer to source code
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
