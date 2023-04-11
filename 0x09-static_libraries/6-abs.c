#include <stdio.h>
#include "main.h"
/**
 *_abs - Entry point
 *@n: single number input
 *The function prints to the output
 *Return: 1 if n is greater 1, else if 0 , else -1
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = (-1) * n;
	}
	return (n);
}
