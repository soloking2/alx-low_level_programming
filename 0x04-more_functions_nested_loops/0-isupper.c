#include <stdio.h>
#include "main.h"

/**
 *_isupper - Entry point
 *@c: input
 *Return: 1 or 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
