#include <stdio.h>
#include "main.h"

int prime_helper(int num, int divisor);
/**
 * is_prime_number - entry point
 * @n: input
 * Return: integer
 */
int is_prime_number(int n)
{
	int i = 5;

	if (n <= 1)
		return (0);
	if (n <= 3)
		return (1);
	if (n % 2 == 0 || n % 3 == 0)
		return (0);
	return (prime_helper(n, i));
}

/**
 * prime_helper - helper function
 * @num: the prime value
 * @divisor: What is used to divider
 * Return: integer
 */
int prime_helper(int num, int divisor)
{
	if (divisor < num)
	{
		if (num % divisor == 0)
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	return (prime_helper(num, divisor + 1));
}

