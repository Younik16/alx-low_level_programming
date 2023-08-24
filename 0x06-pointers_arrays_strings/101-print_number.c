#include "main.h"
#include <stdio.h>
/**
 *  print_number - C program to print an integer
 *  @n: function parameter
 *  Return: nothing
 */

void print_number(int n)
{
	unsigned int k = n;

	if (n < 0)
	{
		_putchar('-');
		k = -n;
	}
		else
		{
			k = n;
		}
	if (k / 10)
	{
		print_number(k / 10);
	}
	_putchar(k % 10 + '0');
}
