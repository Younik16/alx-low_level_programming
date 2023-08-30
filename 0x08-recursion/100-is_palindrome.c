#include "main.h"
#include <stdio.h>
#include <string.h>

/* function prototype */
int check_palindrome(char *s, int start, int end);

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	int length = strlen(s);

	return (check_palindrome(s, 0, length - 1));
}

/**
 * check_palindrome - function to check if a string is a palindrome.
 * @s: The string to be checked.
 * @start: The starting index.
 * @end: The ending index.
 * Return: 1 or 0
 */

int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (check_palindrome(s, start + 1, end - 1));
}
