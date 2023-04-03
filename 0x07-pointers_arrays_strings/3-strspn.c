#include <stdio.h>
#include "main.h"

/**
 * _strspn - entry point
 * @s: input
 * @accept: input
 *
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, numOfBytes = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				numOfBytes++;
				break;
			}
		}
		if (accept[j] != s[i])
			break;
	}
	return (numOfBytes);


}
