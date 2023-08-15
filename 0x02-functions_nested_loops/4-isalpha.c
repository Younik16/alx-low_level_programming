#include "main.h"
/**
 * _isalpha - printing upper and lower case letters
 * @c: function parameter for checking for all letters
 * Return: 0 or 1
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
