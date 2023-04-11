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
	for (; *haystack != '\0'; haystack++)
	{
		char *temp = haystack;
		char *searchItem = needle;

		while (*temp == *searchItem && *searchItem != '\0')
		{
			temp++;
			searchItem++;
		}
		if (*searchItem == '\0')
			return (haystack);
	}

	return (0);
}
