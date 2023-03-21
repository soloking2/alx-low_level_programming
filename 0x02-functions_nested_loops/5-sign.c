#include <stdio.h>
#include "main.h"
/**
 *print_sign - Entry point
 *@n: single number input
 *The function prints to the output
 *Return: 1 if n is greater 1, else if 0 , else -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	} else if (n < -1)
	{
		_putchar('-');
		return (-1);
	}
}
