#include "main.h"
/**
 * leet - C program that encodes a string into 1337
 * @str: pointer to string
 * Return: string
 */

char *leet(char *str)
{
	int i, k;
	char c[] = "aAeEoOtTlL";
		char f[] = "4433007711";

		for (i = 0 ; str[i] != '\0' ; i++)
		{
			for (k = 0 ; c[k] != '\0' ; k++)
			{
				if (str[i] == c[k])
				{
					str[i] = f[k];
				}
			}
		}
		return (str);
}
