#include "main.h"

/**
 * main - prints lowercase alphabets
 *
 * Return: Always 0.
 */
int main(void)
{
	char wale_alpha = 'a';

	while (wale_alpha <= 'z')
	{
		_putchar(wale_alpha);
		wale_alpha++;
		_putchar('\n');

		return (0);
	}
}
