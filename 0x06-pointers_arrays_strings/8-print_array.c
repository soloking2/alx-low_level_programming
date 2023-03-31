#include <stdio.h>
#include "main.h"
/**
 *print_array - Entry point
 *@a: input
 *@n: input
 *Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
