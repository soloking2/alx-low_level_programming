#include <stdio.h>
#include "main.h"
/**
 *_islower - Entry point
 *@c: single letter input
 *The function prints to the output
 *Return: 1 if c is lowercase, else 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
