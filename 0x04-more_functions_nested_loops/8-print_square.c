#include "main.h"
#include <stdio.h>
/**
 * print_square - program to print a square
 * @size: function parameter
 * Return: square
 */
void print_square(int size)
{
	if (size <= 0)
	{
	putchar('\n');
	}
	else
	{
	int row, col;

	for (row = 0 ; row < size ; row++)
	{
		for (col = 0 ; col < size ; col++)
		{
			putchar('#');
		}
		putchar('\n');
	}
	}
}
