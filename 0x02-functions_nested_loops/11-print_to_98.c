#include "main.h"
/**
 * print_to_98 - prints natural numbers
 *
 * @n: start number
 *
 * Return: numbers
 */
void print_to_98(int n)
{
	for (n = 0; n <= 98; n++)
	{
		_putchar(n);
		_putchar(',');
		_putchar('\n');
	}
}
