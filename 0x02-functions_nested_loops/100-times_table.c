#include <stdio.h>
#include "main.h"
/**
 *print_times_table - Entry point
 *@n: input
 *The function prints to the output
 */
void print_times_table(int n)
{
	int a, i, result;

	if (n > 15 || n < 0)
	{
		return;
	}

	for (a = 0; a <= n; a++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (i = 1; i <= n; i++)
		{
			result = i * a;

			if ((result / 10) > 0)
			{
				_putchar((result / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((result % 10) + '0');
			if (i < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
