#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * puts_half - C program to print half of a string
 * @str: pointer function parameter
 * Return: nothing
 */

void puts_half(char *str)
{
	size_t i;
	size_t n = strlen(str);

	if (n % 2 == 0)
		n = strlen(str) / 2;
	else
		n = (strlen(str) - 1) / 2;
	for (i = n ; i < strlen(str) ; i++)
		printf("%c", str[i]);
	printf("\n");
}
