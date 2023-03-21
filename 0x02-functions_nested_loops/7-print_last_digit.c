#include <stdio.h>
#include "main.h"
/**
 *print_last_digit - Entry point
 *@n: single number input
 *The function prints to the output
 *Return: last digit
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;

	if (last < 0)
	{
		last = (-1 * last);
	}
	_putchar(last + '0');
	return (last);
}
