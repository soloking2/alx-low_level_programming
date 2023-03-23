#include <stdio.h>
#include "main.h"

/**
 *print_sqaure - Entry point
 *@size: input
 */
void print_square(int size)
{
	int i, y;

	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		for (i = 0; i < size; i++)
		{
			for (y = 0; y < size; y++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
