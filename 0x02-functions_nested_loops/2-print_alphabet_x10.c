#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets times ten
 *
 * Return: alphabets a-z
 */
void print_alphabet_x10(void)
{
	char wale_alpha = 'a';
	int n = 0;

	while (n < 10)
	{
		for (wale_alpha = 'a'; wale_alpha <= 'z'; wale_alpha++)
		{
			_putchar(wale_alpha);
		}

		n++;

		_putchar('\n');
	}
}
