#include "main.h"
/**
 * _memset - fill a block of memory with specific value
 * @s: beginning
 * @b: value
 * @n: number of bytes
 * Return: new array
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
