#include <stdio.h>
#include "main.h"
/**
 **_strcat - Entry point
 *@dest: input
 *@src: input
 *Return: character pointer
 */
char *_strcat(char *dest, char *src)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
		;
	for (b = 0; src[b] != '\0'; b++)
	{
		dest[a] = src[b];
		b++;
	}
	return (dest);
}
