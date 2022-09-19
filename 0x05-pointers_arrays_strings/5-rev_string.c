#include "main.h"

/**
 * rev_string - Reverses a string.
 *
 * @s: The string to be reversed
 *
 *Return: Nothing
*/
void rev_string(char *s)
{
	int step1, step2;

	for (step1 = 0; s[step1] != '\0'; step1++)
	{
		for (step2 = step1 - 1; step2 >= 0; step2--)
			_putchar(s[step2]);
	}
	_putchar('\n');
}
