#include <stdio.h>
#include "main.h"
/**
 **rot13 - Entry point
 *@s: input
 *Return: character
 */
char *rot13(char *s)
{
	int i = 0, x = 0;
	char alpha1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char alpha2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + i) != 0)
	{
		for (x = 0; x <= 52; x++)
		{
			if (*(s + i) == alpha1[x])
			{
				*(s + i) = alpha2[x];
				break;
			}
		}
		i++;
	}
	return (s);
}
