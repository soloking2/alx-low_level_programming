#include <stdio.h>
#include "main.h"

int _strlen(char *s);
int palindromeHelperFunc(char *s, int start, int end);
/**
 * is_palindrome - entry point
 * @s: input
 * Return: integer
 */
int is_palindrome(char *s)
{
	return (palindromeHelperFunc(s, 0, _strlen(s) - 1));
}


/**
 *_strlen - determine of the string
 *@s: input
 *Return: integer
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * palindromeHelperFunc - helper function
 * @s: string
 * @start: starting index
 * @end: end index
 * Return: integer
 */
int palindromeHelperFunc(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
	{
		return (0);
	} else
	{
		return (palindromeHelperFunc(s, start + 1, end - 1));
	}
}

