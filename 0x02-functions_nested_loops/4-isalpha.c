#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: alphabet to check for
 * Return: 1 if letter
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c<= 'z') || (c >= 'A' && c <= 'Z'));
}
