#include "main.h"
/**
 * more_numbers - prints numbers from
 * 0 to 14 multiply by 10
 *
 * Return: Nothing to return
 */
void more_numbers(void)
{
	int n, o, p;

	for (n = 0; n <= 9; n++)
	{
		for (o = 0; o <= 14; o++)
		{
			p = o * 10;
			if (x != 0)
				_putchar(p + '0');
		}
		_putchar('\n');
	}
}
