#include <stdio.h>
#include "main.h"
/**
*reverse_array - Entry point
*@a: input
*@n: input
*Return: Nothing
*/
void reverse_array(int *a, int n)
{
	int i, b;

	for (i = 0; i < (n - 1) / 2; ++i)
	{
		b = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - 1] = b;
	}
}
