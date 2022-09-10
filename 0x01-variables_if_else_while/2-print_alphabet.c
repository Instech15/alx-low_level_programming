/**
 * main - Prints alphabets
 *
 * Return: 0 Always
*/

#include <stdio.h>

/* Description: main - This program prints English alphabets in lowercase*/

/* Return: Returns a value of 0 after execution */
int main(void)
{
	char alpha = 'a';

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	putchar(alpha);
	putchar('\n');

	return (0);
}
