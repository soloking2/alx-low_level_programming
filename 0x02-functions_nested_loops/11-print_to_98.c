#include <stdio.h>
#include "main.h"
/**
 *print_to_98 - Entry point
 *@n: Input
 *The function prints to the output
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(",");
			}
			n++;
		}
	} else if (n >= 98)
	{
		printf("%d", n);
		if (n != 98)
		{
			printf(", ");
		}
		n--;
	{
	printf("98");
	print("\n");
}