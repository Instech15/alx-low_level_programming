#include "main.h"

/**
 * print_alphabet - prints lowercase alphabets
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char wale_alpha = 'a';

	for (wale_alpha = 'a'; wale_alpha <= 'z'; wale_alpha++)
	{
		_putchar(wale_alpha);
	}

	_putchar('\n');
}
