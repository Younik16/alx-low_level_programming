#include "main.h"
#include <ctype.h>
/**
 * _isupper - checks for upper case alphabeths
 * @c: an alphabet
 * Return: 1 if uppercase, 0 if not
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);

	else
		return (0);
}
