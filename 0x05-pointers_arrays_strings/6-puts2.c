#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *  puts2 - C program to print every other character in a string
 *  @str: pointer function parameter
 *  Return: nothing
 */

void puts2(char *str)
{
	size_t i;

	for (i = 0 ; i < strlen(str) ; i++)
	{
	if (i % 2 == 0)
	printf("%c", str[i]);
	}
	printf("\n");
}
