#include "main.h"
/**
 * _abs - computing the absolute value of an integer
 * @a: function parameter for computation
 * Return: 0 (success)
 */

int _abs(int a)
{
	if (a < 0)
		return (-a);
	else
		return (a);
}
