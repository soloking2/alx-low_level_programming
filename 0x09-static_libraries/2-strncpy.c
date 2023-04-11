#include <stdio.h>
#include "main.h"
/**
 **_strncpy - Entry point
 *@dest: input
 *@src: input
 *@n: input
 *Return: characters
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (i < n && *(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
