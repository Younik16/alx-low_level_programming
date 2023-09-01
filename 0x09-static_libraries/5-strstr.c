#include "main.h"
#include <string.h>
/**
 * _strstr - C program to locate a substring
 * @haystack: string
 * @needle: string
 * Return: pointer to substring
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
