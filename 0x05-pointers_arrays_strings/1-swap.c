#include "main.h"
#include <stdio.h>
/**
 * swap_int - C program to swap integers
 * @a: function parameter
 * @b: function parameter
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
