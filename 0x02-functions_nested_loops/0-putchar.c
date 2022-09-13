#include "main.h"
/**
 * main - printing _printing.
 *
 * Return: 0 Always
*/
int main(void)
{
	char *wale = "_putchar";

	while (*wale)
	{
		_putchar(*wale);
		wale++;
	}

	_putchar('\n');

	return (0);
}
