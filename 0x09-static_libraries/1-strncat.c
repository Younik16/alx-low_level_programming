#include "main.h"
#include <string.h>
/**
 * _strncat - c program to strncat
 * @src: pointer to string soure
 * @dest: pointer to string destination
 * @n: number of bytes
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
