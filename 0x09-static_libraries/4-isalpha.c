#include <stdio.h>
#include "main.h"
/**
 *_isalpha - Entry point
 *@c: single letter input
 *The function prints to the output
 *Return: 1 if c is lowercase, else 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
