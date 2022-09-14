#include "main.h"
/**
 * times_table - prints times table
 *
 * Return Always 0
 */
void times_table(void)
{
	int number, times, anotherNumber;

	for (number = 0; number <= 9; number++)
	{
		_putchar('0');
		for (times = 1; times <= 9; times++)
		{
			_putchar(',');
			_putchar(' ');

			anotherNumber = number * times;

			if (anotherNumber <= 9)
				_putchar(' ');
			else
				_putchar((times / 10) + '0');
				_putchar ((times % 10) + '0');
		}
				_putchar('\n');
	}
}
