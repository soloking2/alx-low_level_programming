#include <stdio.h>
/**
 *main - Entry point
 *Print random numbers
 *Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 100; i++)
	{
		for (j = i + 1; j <= 100; j++)
		{
			putchar('0' + i + j);
			if (i > j || i == j)
			{
				break;
			}
		}
		putchar(',');
		putchar(' ');

	}
	putchar('\n');
	return (0);
}
