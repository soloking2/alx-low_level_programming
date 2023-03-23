#include <stdio.h>
#include "main.h"

/**
 *more_numbers - Entry point
 */
void more_numbers(void)
{
	int i;
	int m;

	for (i = 0; i < 10; i++)
	{
		for (m = 0; m < 15; m++)
		{
			_putchar('0' + m);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
