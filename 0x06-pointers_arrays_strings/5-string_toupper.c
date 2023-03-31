#include <stdio.h>
#include "main.h"
/**
**string_toupper - Entry point
*@s: input
*Return: character
*/
char *string_toupper(char *s)
{
	char *start = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
		{
			*s -= 32;
		}
		s++;
	}
	return (start);

}
