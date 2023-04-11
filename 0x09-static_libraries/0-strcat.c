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
	char *start = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (start);
}
