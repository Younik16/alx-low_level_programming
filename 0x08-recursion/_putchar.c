#include <unistd.h>
/**
 * _putchar - C program to print to the stdout
 * @c: function parameter
 * Return: string
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
