#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 *
 * @n: number to be entered
 *
 * Return: Returns the value of the last digit
 */
int print_last_digit(int n)
{
	int p = (n % 10);

	if (p < 0)
	{
		p = (-1 * p);
	}

	_putchar(p + '0');

	return (p);
}

