#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * puts_half - C program to print half of a string
 * @str: pointer function parameter
 * Return: nothing
 */

void puts_half(char *str)
{
	int count = 0, i;

	while (count >= 0)
	{
		if (str[count] == '\0')
			break;
		count++;
	}
	if (count % 2 == 1)
		i = count / 2;
	else
		i = (count - 1) / 2;
	for (i++; i < count; i++)
		putchar(str[i]);
	putchar('\n');
}
