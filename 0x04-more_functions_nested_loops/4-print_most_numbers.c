#include "main.h"
/**
 * print_most_numbers - prints numbers from
 * 0 to 9 except 2 and 4.
 *
 * Return: Nothing to be returned
 */
void print_most_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		if (n != 2 && n != 4)
		{
			continue;
		}
			_putchar(n);
	}
	_putchar('\n');
}
