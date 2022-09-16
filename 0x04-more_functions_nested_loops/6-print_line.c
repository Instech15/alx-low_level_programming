#include "main.h"
/**
 * print_line - print straight line
 * 
 * Description
 * @n: number to be used
 * @i: the loop character
 * Return: Nothing to be returned
 */
void print_line(int n)
{
	int i;
	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
