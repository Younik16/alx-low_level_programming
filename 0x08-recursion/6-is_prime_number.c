#include "main.h"
#include <stdio.h>

/* function prototype */
int is_prime_recursive(int n, int divisor);

/**
 * is_prime_number - Checks if an integer is a prime number.
 * @n: The integer to be checked.
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_recursive(n, 2));
}
/**
 * is_prime_recursive - function for checking a prime number
 * @n: The number to be checked.
 * @divisor: The current divisor being checked.
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_recursive(int n, int divisor)
{
	if (divisor >= n)
		return (1);
	if (n % divisor == 0)
		return (0);
	return (is_prime_recursive(n, divisor + 1));
}
