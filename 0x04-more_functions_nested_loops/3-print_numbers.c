#include "main.h"
#include <stdio.h>
/**
 *  print_numbers - program to print 0 to 9
 *  Return: nothing
 */

void print_numbers(void)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
		putchar(i + '0');
	putchar('\n');
}
