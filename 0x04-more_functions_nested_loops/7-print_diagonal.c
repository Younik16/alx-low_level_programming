#include "main.h"
/**
 * print_diagonal - program to print diagonal line
 * @n: function parameter
 * Return: diagonal line
 */
void print_diagonal(int n)
{
	int a, j;

	for (a = 0; a < n;  a++)
	{
	if (n > 1)
	for (j = 0; j < a; j++)
	{
	_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
	}
	if (n <= 0)
	{
	_putchar('\n');
	}
}
