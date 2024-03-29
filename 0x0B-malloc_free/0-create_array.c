#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars amd initializes with specific char
 * @size: array size
 * @c: char
 * Return: pointer to array, null if fail
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
