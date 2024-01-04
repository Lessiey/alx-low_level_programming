#include "main.h"
/**
 * _strncat - concatenates two strings using n bytes from src
 * @dest: input value
 * @n: input
 * Return: dest pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		des[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
