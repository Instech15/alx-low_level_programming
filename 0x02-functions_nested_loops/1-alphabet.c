#include "main.h"

/**
 * main - prints lowercase alphabets
 *
 * Return: Always 0.
 */
int main(void)
{
	char wale_alpha = 'a';

	for (wale_alpha = 'a'; wale_alpha <= 'z'; wale_alpha++)
	{
		_putchar(wale_alpha);
		_putchar('\n');
	}

	return (0);
}
