#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_rev - C program to print in reverse
 * @s: pointer function parameter
 * Return: nothing
 */

void print_rev(char *s)
{
	int i;

	for (i = strlen(s) - 1 ; i >= 0 ; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
