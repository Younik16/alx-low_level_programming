#include "main.h"
#include <ctype.h>
/**
 * _isdigit - to check for digits from 0 to 9
 * @c: function parameter
 * Return: 1 if a digit, 0 if not
 */

int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
