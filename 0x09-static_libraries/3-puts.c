#include <stdio.h>
#include "main.h"
/**
 *_puts - Entry point
 *@s: input
 *Return: Nothing
 */
void _puts(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
