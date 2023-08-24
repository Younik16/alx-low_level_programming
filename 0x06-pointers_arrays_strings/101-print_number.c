#include "main.h"
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
		putchar(45);
		k = -1;
	}
	if (k / 10)
	{
		print_number(k / 10);
	}
	putchar(k % 10 + '0');
}
