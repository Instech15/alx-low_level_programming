#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets times ten
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char wale_alpha = 'a';

	for (wale_alpha = 'a'; wale_alpha <= 'z'; wale_alpha + 10)
	{
		_putchar(wale_alpha);
	}

	_putchar('\n');
}
