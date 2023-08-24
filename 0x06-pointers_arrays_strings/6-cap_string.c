#include <ctype.h>

/**
 * cap_string - Capitalize all words in a string.
 * @str: Pointer to the string.
 * Return: Pointer to the modified string.
 */
char *cap_string(char *str)
{
	int j, k;
	char a[] = {44, 59, 46, 33, 63, 34, 40, 41, 123, 125, 32, 9, 10};

	for (j = 0 ; str[j] != '\0' ; j++)
	{
		if (j == 0 && str[j] >= 97 && str[j] <= 122)
		{
			str[j] = str[j] - 32;
		}
	}
	for (k = 0 ; a[k] != '\0' ; k++)
	{
	if (a[k] == str[j] && (str[j + 1] >= 97 && str[j + 1] <= 122))
	{
	str[j + 1] = str[j + 1] - 32;
	}
	}
	return (str);
}
