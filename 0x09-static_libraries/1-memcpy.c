#include "main.h"
#include <string.h>
/**
 * _memcpy - C function to copy memory area
 * @dest: memoery area 1
 * @src: memory area 2
 * @n: bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
