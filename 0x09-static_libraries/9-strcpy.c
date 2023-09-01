#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * *_strcpy - C program to copy a string
 * @dest: buffer to copy into
 * @src: source code to copy
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
	*(dest + count) = *(src + count);
	if (*(src + count) == '\0')
	break;
	count++;
	}
	return (dest);
}
