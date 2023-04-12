#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *str_concat - entry point
 * @s1: input
 * @s2: input
 * Return: character
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, j = 0, len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s1 = "";
	for (i = 0; s1[i] || s2[i]; i++)
		len++;
	concat = malloc(len * sizeof(char));
	if (concat == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
	{
		concat[j++] = s1[i];
	}
	for (i = 0; s2[i]; i++)
		concat[j++] = s2[i];
	new_str[len] = '\0';
	return (new_str);
}
