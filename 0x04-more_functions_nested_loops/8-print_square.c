#include "main.h"
#include <stdio.h>
/**
 * print_square - program to print a square
 * @size: function parameter
 * Return: square
 */
void print_square(int size)
{
	int row, col;

	for (row = 1 ; row <= size ; row++)
	{
		for (col = 1 ; col <= size ; col++)
		{
			putchar('#');
		}
		putchar('\n');
		if (size <= 0)
		{
			putchar('\n');
		}
	}
}

