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
	char *searchItem = needle, *searchString = haystack;

	while (*haystack)
	{
		searchString = haystack;
		needle = searchItem;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}

		if (*needle == '\0')
			return (haystack);
		haystack = searchString + 1;
	}
	return (NULL);
}
