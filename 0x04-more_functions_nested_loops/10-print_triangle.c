#include "main.h"
#include <stdio.h>
/**
 * print_triangle - C program to print a triangle
 * @size: function parameter
 * Return: triangle
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 1 ; i <= size ; i++)
		{
			for (j = 1 ; j <= size - i ; j++)
			{
				putchar(' ');
			}
				for (j = 1 ; j <= i ; j++)
				{
					putchar('#');
				}
				putchar('\n');
		}
}
}
