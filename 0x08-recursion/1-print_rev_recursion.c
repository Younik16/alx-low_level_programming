#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - C program to print a string in reverse
 * @s: pointer to string
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
    {
	    return;
    }
    _print_rev_recursion(s + 1);
    putchar(*s); 
}
