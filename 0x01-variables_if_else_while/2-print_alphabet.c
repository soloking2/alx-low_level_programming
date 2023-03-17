#include <stdio.h>
/**
 *main - Entry point
 *Print random numbers
 *Return: Always 0 (Success)
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);

	}
	putchar('\n');
	return (0);
}
