#include <unistd.h>
/**
 * _putchar - writes c to stdout
 * @c: function parameter
 * Return: 1 or -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
