#include <stdio.h>
#include "main.h"
/**
 *print_alphabet - Entry point
 *The function prints to the output
 *Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
