#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * rev_string - C program to reverse string
 * @s: pointer function parameter
 * Return: nothing
 */

void rev_string(char *s)
{
	int i;

	for (i = strlen(s) - 1 ; i >= 0 ; i--)
		printf("%c", s[i]);
	printf("\n");
}
