#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *create_array - entry point
 * @size: input
 * @c: input
 * Return: character
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	str = malloc(size * sizeof(char));
	if (str == NULL)
		return (NULL);
	for (; i < size; i++)
	{
		str[i] = c;
	}
	return (s);
}
