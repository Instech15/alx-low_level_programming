#include "main.h"
/**
 * more_numbers - prints numbers from
 * 0 to 14 multiply by 10
 *
 * Return: Nothing to return
 */
void more_numbers(void)
{
	int n;

	for (n = 0; n <= 14; n++)
	{
		_putchar(n * 10);
	}
}
