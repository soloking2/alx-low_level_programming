#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: input
 * @argv: input
 * Return: Success(0) or Fail (1)
 */
int main(int argc, char *argv[])
{
	int i, result = 1;

	if (argc > 0 && (argc - 1) == 2)
	{
		for (i = 1; i < argc; i++)
		{
			result *= atoi(argv[i]);
		}
		printf("%d\n", result);
		return (0);
	}
	printf("Error\n");
	return (1);
}
