#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * *string_nconcat - entry point
 * @s1: input
 * @s2: input
 * @n: input
 * Return: a pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int i, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		len1++;
	for (i = 0; s2[i]; i++)
		len2++;
	if (n >= len2)
		n = len2;
	concat = malloc(len1 + n + 1);
	if (concat == NULL)
		return (NULL);
	for (i = 0; i < (len1 + n); i++)
	{
		if (i < len1)
		{
			concat[i] = *s1;
			s1++;
		} else
		{
			concat[i] = *s2;
			s2++;
		}
	}
	concat[i] = '\0';
	return (concat);
}
