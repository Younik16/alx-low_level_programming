#include <unistd.h>
/**
 * _putchar - C program to write character c to stdout
 * @c: pointer to character to be printed
 * Return: 0 or -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
