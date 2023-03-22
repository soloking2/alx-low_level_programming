#include <stdio.h>
#include "main.h"
/**
 *times_table - Entry point
 *The function prints to the output
 */
void times_table(void)
{
	int nine, i, result;

	for (nine = 0; nine <= 9; nine++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (i = 1; i <= 9; i++)
		{
			result = i * nine;
			if ((result / 10) > 0)
			{
				_putchar((result / 10) + '0');	
			} else
			{
				_putchar(' ');
			}
			_putchar((result % 10) + '0');

			if (i < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
