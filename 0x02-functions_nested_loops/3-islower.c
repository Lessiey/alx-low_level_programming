#include "main.h"

/**
 * _islower - checks for lowercase alphabets
 * @c: character to be checked
 * Return: 0 (success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
