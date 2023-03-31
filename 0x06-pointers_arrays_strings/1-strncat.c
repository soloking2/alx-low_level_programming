#include <stdio.h>
#include "main.h"
/**
 **_strncat - Entry point
 *@dest: input
 *@src: input
 *@n: input
 *Return: string
 */
char *_strncat(int *dest, int *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[i];
	}
	dest[i + j] = '\0';
	return (dest);
}
