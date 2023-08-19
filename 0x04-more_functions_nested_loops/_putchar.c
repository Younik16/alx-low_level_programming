#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the c to stdout
 * @c: function parameter
 * Return: 1 0r -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
