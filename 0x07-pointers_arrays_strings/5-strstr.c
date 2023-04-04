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
			return (temp);
		haystack = temp + 1;
	}
	return (NULL);
}
