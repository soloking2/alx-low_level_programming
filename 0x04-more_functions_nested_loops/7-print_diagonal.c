#include <stdio.h>
#include "main.h"

/**
 *print_diagonal - Entry point
 *@n: input
 */
void print_diagonal(int n)
{
	int i, y;

	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		for (i = 0; i < n; i++)
		{
			for (y = 0; y < i; y++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
