#include<stdlib.h>
#include "main.h"
/**
 * malloc-checked - causes normal termination with a status value of 98
 * @b: function
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);

	if (i == NULL)
		exit(98);
	return (i);
}
