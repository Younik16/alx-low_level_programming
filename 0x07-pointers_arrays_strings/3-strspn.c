#include "main.h"
#include <string.h>
/**
 *_strspn - C program to get the length of a prefix subscript
 *@s: function parameter
 *@accept: bytes
 * Return: length
 */

unsigned int _strspn(char *s, char *accept)
{
	return ((unsigned int)strspn(s, accept));
}
