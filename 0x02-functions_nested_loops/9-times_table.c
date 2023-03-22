#include <stdio.h>
#include "main.h"
/**
 *times_table - Entry point
 *The function prints to the output
 */
void times_table(void)
{
	int nine, i;

	for (nine = 0; nine < 9; nine++)
	{
		for (i = 0; i < 9; i++)
		{
			int result = i * nine;

			_putchar(result + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
