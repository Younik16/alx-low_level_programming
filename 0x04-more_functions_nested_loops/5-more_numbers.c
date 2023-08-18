#include "main.h"
#include <stdio.h>
/**
 * more_numbers - program to print 1 - 14 ten times
 * Return: putchar
 */

void more_numbers(void)
{
	int i, j;

	for (i = 1 ; 1 <= 10 ; i++)
	{
		for (j = 0 ; j <= 14 ; j++)
		{
			putchar(j + '0');
		}
	putchar('\n');
	}
}
/**
 *  main - to return function
 *  Return: 0
 */

int main(void)
{
	more_numbers();
	return (0);
}
