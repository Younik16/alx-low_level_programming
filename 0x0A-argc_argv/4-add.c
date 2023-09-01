#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - C program to add positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	unsigned int a, sum = 0;
	char *c;

	if (argc > 1)
	{
		for (i = 1 ; i < argc ; i++)
		{
			c = argv[i];
			for (a = 0 ; a < strlen(c) ; a++)
			{
				if (c[a] < 48 || c[a] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(c);
			c++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
