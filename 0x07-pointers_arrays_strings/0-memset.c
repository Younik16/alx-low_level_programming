#include <string.h>
/**
 *_memset - function that fills memory with a constant byte
 *@s: pointer
 *@b: constant byte
 *@n: bytes of memory
 *Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	return ((char *)memset(s, b, n));
}
