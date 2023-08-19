#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - program to print 0 to 9 excluding 2 and 4
 * Return: nothing
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
	{
		if (i == 2)
			continue;
		if (i == 4)
			continue;
		putchar(i + '0');
	}
		putchar('\n');
}
