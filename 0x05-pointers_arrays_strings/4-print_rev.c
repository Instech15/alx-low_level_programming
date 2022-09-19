#include "main.h"

/**
 * print_rev - Prints a string, in reverse, followed by a new line
 *
 * @s: The string to be reversed
 *
 * Return: Nothing
 */

void print_rev(char *s)
{
	int count = 0;
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	for (n = count - 1; n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
