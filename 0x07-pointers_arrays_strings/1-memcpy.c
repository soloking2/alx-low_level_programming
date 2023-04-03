#include <stdio.h>
#include "main.h"

/**
 * *_memcpy - entry point
 * @dest: input
 * @src: input
 * @n: input
 * Return: string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *returnedResult = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (returnedResult);
}
