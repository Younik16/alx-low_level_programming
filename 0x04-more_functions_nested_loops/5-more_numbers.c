#include "main.h"
#include <stdio.h>
/**
 * more_numbers - program to print 1 - 14 ten times
 * Return: putchar
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j <= 14 ; j++)
		{
			if (j >= 10)
				putchar('1');
			putchar(j % 10 + '0');
		}
	putchar('\n');
	}
}
