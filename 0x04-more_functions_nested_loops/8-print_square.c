#include <stdio.h>
#include "main.h"

/**
 *print_sqaure - Entry point
 *@size: input
 */
void print_square(int size)
{
	int i;

	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		for (i = 0; i < size; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
