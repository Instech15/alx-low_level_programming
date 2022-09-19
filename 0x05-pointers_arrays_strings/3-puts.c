#include "main.h"
#include <stdio.h>

/**
 * _puts - Prints a string, followed by a new line, to stdout
 *
 * @str: The string
 *
 * return: Nothing
 */
void _puts(char *str)
{
	int wale;
	
        for (wale = 0; str[wale] != '\0'; wale++)
	{
		_putchar(str[wale]);
	}
	_putchar('\n');
}
