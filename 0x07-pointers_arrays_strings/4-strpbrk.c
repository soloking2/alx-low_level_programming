#include <stdio.h>
#include "main.h"

/**
 * *_strpbrk - entry point
 * @s: input
 * @accept: input
 *
 * Return: character or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	char *a = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
			{
				return (s);
			}
			accept++;
		}
		accept = a;
		s++;
	}
	return ('\0');


}
