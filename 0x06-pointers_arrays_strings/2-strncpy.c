#include "main.h"
#include <string.h>
/**
 * _strncpy - C program to copy a string
 * @dest: destination for copied string
 * @src: pointer for string source to be copied
 * @n: number of characters
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
