#include <stdio.h>
/**
 * main - entry point
 * @argc: input
 * @argv: input
 * Return: Always Success(0)
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
		for (count = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	return (0);
}
