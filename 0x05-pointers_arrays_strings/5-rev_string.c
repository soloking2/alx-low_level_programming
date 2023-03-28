#include <stdio.h>
#include "main.h"
/**
 *rev_string - Entry point
 *@s: input
 *Return: Nothing
 */
void rev_string(char *s)
{
	int i, len;
	char *start, *end = s;

	for (i = 0; s[i] != '\0' && s[i + 1] != '\0'; i++)
	{
		end++;
	}
	len = i + 1;
	start = s;
	for (i = 0; i < len / 2; i++)
	{
		char temp;

		temp = *end;
		*end = *start;
		*start = temp;
		start++;
		end--;
	}
	*end = '\0';
}
