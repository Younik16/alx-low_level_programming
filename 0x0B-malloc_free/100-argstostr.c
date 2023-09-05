#include "main.h"
#include <stdlib.h>
/**
 * argstostr - function to concatenate all arguments of your program
 * @ac: function parameter
 * @av: function parameter
 * Return: string
 */

char *argstostr(int ac, char **av)
{
	int i, total_length = 0, index = 0;
	char *result;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		char *arg = av[i];

		while (*arg)
		{
			total_length++;
			arg++;
		}
		total_length++;
	}
	result = (char *)malloc(total_length + 1);
	if (result == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		char *arg = av[i];

		while (*arg)
		{
			result[index++] = *arg++;
		}
		result[index++] = '\n';
	}
	result[index] = '\0';
	return (result);
}
