#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - program to print diagonal line
 * @n: function parameter
 * Return: diagonal line
 */

void print_diagonal(int n)
{
	char a = '\';
	int i;
	int space;

	for (i = 1 ; i <= n ; i++)
	{
		for (space = i ; space < i ; space++)
		{
			putchar( );
		}
		putchar(a);
		putchar('\n');
	}
	if (n <= 0)
	{
		putchar('\n');
	}
}
