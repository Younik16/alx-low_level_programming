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
	int i, j;

	n = n - 1;
	for (i = 0 ; i < n ; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
		n--;
	}
}

