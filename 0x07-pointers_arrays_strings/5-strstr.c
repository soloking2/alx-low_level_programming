#include <stdio.h>
#include "main.h"

/**
 * *_strstr - entry point
 * @haystack: input
 * @needle: input
 *
 * Return: character or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *tempHaystack = haystack;

	while (*haystack)
	{
		tempHaystack = haystack;
		while (*needle == *haystack)
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
		{
			return (haystack);
		}
		haystack = tempHaystack + 1;

	}
	return ('\0');


}
