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
	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		char *temp;

		temp = haystack;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}

		if (*needle == '\0')
			return (haystack);
		haystack = temp + 1;
	}
	return ('\0');
}
