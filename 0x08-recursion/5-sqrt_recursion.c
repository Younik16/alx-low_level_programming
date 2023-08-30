#include "main.h"

/* function prototype */
int find_sqrt(int n, int low, int high);

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number for which to find the square root.
 * Return: The natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (find_sqrt(n, 0, n));
}

/**
 * find_sqrt - function to find the square root using recursion.
 * @n: The number for which to find the square root.
 * @low: The lower bound of the search range.
 * @high: The upper bound of the search range.
 * Return: The natural square root or -1
 */
int find_sqrt(int n, int low, int high)
{
	int mid = (low + high) / 2;

	if (mid * mid == n)
		return (mid);
	if (low >= high)
		return (-1);
	if (mid * mid > n)
		return (find_sqrt(n, low, mid - 1));
	else
		return (find_sqrt(n, mid + 1, high));
}
