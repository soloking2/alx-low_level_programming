#include <stdio.h>
#include "main.h"
/**
 *puts_half - Entry point
 *@s: input
 *Return: Nothing
 */
void puts_half(char *s)
{
	int i, half;

	i = 0;
	while (s[i] != '\0')
		i++;
	half = i / 2;
	if (i % 2 == 1)
		half++;
	while (half < i)
	{
		_putchar(s[half]);
		half++;
	}
	_putchar('\n');
}
