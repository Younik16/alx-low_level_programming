#include <stdio.h>
#include <stdlib.h>
/**
 *main - prints the minimum number of coins to make change for an amount of money.
 *@argc: argument count
 *@argv: argument vector
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int a, b= 0;

	if (argc != 2)
	{
	printf("Error\n");
return (1);
	}
a = atoi(argv[1])
while (a > 0)
{
	b++;
if((a - 25) >= 0)
{
a -= 25;
continue;
}
if
