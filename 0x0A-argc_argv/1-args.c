#include <stdio.h>
/**
 * main - entry point
 * @argc: input
 * @argv: input
 * Return: Always Success(0)
 */
int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", (argc - 1));
	return (0);
}
