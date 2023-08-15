#include "main.h"
/**
 * print_last_digit - printing the last digit of a number
 * @a: function parameter for printing number
 * Return: digit
 */

int print_last_digit(int a)
{
	int j;

	j = a % 10;
	if (a < 0)
		j = -j;
	_putchar(j + '0');
	return (j);
}

