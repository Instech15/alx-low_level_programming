#include "main.h"
/**
 * times_table - prints times table
 *
 * Return Always 0
 */
void times_table(void)
{
	int f, s, t;

	for (int f = 0; f <= 9; f++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (s = 0; s <= 9; s++)
		{
			t = (f * s);
			if ((t / 10) > 0)
			{
				_putchar((t / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar ((t % 10) + '0');
			if (f < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	_putchar('\n');
	}
}
