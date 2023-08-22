#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_array - C program to print n elements of an array
 * @a: pointer function parameter
 * @n: number of elements
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", a[i]);
	if (i < n - 1)
	printf(", ");
	}
	printf("\n");
}
