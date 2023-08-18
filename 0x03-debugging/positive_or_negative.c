#include "main.h"
/**
 * positive_or_negative - checking for postive or negative numbers
 * @i: function parameter
 * Return: nothing
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);
}
