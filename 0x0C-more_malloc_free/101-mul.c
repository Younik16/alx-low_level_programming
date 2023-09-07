#include <stdio.h>
#include <stdlib.h>
/**
 * multiply - C program that multiplies two positive numbers
 * @num1: first number
 * @num2: second number
 * Return: result
 */

unsigned int multiply(unsigned int num1, unsigned int num2)
{
	return (num1 * num2);
}
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	unsigned int num1, num2;

	if (sscanf(argv[1], "%u", &num1) != 1 || sscanf(argv[2], "%u", &num2) != 1)
	{
		printf("Error\n");
		return (98);
	}
	if (num1 <= 0 || num2 <= 0)
	{
		printf("Error\n");
		return (98);
	}
	unsigned int result = multiply(num1, num2);

	printf("%u\n", result);
	return (0);
}
