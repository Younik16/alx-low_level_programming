#include "main.h"
/**
 * rot13 - C program that encodes a string using rot13
 * @s: pointer to string
 * Return: string
 */

char *rot13(char *s)
{
	int j, k;
	char i[] = 
"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char c[] =
		"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for *(j = 0 ; s[j] != '\0' ; j++)
	{
		for (k = 0 ; i[k] != '\0' ; k++)
		{
			if (s[j] == i[k])
			{
				s[j] = c[k];
				break;
			}
		}
	}
	return (s);
}
