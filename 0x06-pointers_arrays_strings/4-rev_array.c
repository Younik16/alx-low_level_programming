#include "main.h"
#include <stdio.h>
/**
 * reverse_array - C praogram to reverse contents of an array
 * @a: pointer to array
 * @n: number of elements
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i;

	for (i = n - 1 ; i >= 0 ; i--)
	{
		printf("%d", a[i]);
		if (i > 0)
			printf(", ");
	}
	printf("\n");
}

