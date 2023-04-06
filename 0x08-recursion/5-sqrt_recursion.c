#include <stdio.h>
#include "main.h"

int sqrt_helper(int root, int num);
/**
 * _sqrt_recursion - entry point
 * @n: input
 * Return: number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (sqrt_helper(1, n));

}
/**
 * sqrt_helper - execute code
 * @root: input
 * @num: input
 * Return: number
 */
int sqrt_helper(int root, int num)
{
	if (num == (root * root))
		return (root);
	else if (root > num)
		return (-1);
	return (sqrt_helper(root + 1, num));
}
