#include "main.h"
#include <unistd.h>
/**
 * _puts - printing strings
 * @c: pointer
 * Return: 1 or -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
