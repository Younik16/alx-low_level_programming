#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * *_strcpy - C program to copy a string
 * @dest: buffer to copy into
 * @str: source code to copy
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
