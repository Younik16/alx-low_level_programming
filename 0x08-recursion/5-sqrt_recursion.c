#include "main.h"
#include <stdio.h>

/* function prototype */
int sqrt_recursive(int n, int start, int end);

/**
 * _sqrt_recursion - prints natural square root of a number
 * @n: pointer to number
 * Return: natural square root of n, or -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	return (sqrt_recursive(n, 1, n));
}

/**
 * sqrt_recursive - function for calculating the square root.
 * @n: pointer to the number
 * @start: The starting value for the search.
 * @end: The ending value for the search.
 * Return: The natural square root of n, or -1 if not found.
 */
int sqrt_recursive(int n, int start, int end)
{
	int mid;

	if (start <= end)
	{
		mid = (start + end) / 2;
		if (mid * mid == n)
			return (mid);
		if (mid * mid > n)
			return (sqrt_recursive(n, start, mid - 1));
		return (sqrt_recursive(n, mid + 1, end));
	}
	return (-1);
}
