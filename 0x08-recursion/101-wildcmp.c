#include "main.h"
#include <stdio.h>
/**
 * wildcmp - Checks if two strings match
 * @s1: pointer to first string.
 * @s2: pointer to second string.
 * Return: 1 or 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s2 == '*')
	{
	if (*(s2 + 1) == '*' || *s1 == '\0')
	return (wildcmp(s1, s2 + 1));
	return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	return (0);
}
