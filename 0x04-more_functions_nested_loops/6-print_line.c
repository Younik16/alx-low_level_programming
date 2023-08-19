#include "main.h"
#include <stdio.h>
/**
 * print_line - program to print a straight line
 * @n: function parameter
 * Return: line
 */

void print_line(int n)
{
	if (n <= 0)
	{
		putchar('\n');
	}
		else
		{
	int i;

	for (i = 1; i <= n ; i++)
	{
		putchar('_');
	}
	putchar('\n');
		}
}
