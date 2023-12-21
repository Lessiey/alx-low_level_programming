#include "main.h"
/**
 * _isdigit - checks for digits from 0 to 9
 * @c: number
 * Return: 1 if number 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
