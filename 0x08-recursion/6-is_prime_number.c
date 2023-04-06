#include <stdio.h>
#include "main.h"

/**
 * is_prime_number - entry point
 * @n: input
 * Return: integer
 */
int is_prime_number(int n)
{
	int i;

	if (n <= 1)
		return (0);
	if (n <= 3)
		return (1);
	if (n % 2 == 0 || n % 3 == 0)
		return (0);
	for (i = 5; i < n; i++)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}
