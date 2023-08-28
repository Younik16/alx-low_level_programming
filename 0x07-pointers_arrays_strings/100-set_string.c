#include "main.h"
#include <stdio.h>
/**
 * set_string - set the value of a pointer to a char
 * @s: pointer to a pointer
 * @to: pointer
 * Return: 0;
 */

void set_string(char **s, char *to)
{
	*s = to;
}
