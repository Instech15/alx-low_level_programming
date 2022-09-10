#include <stdio.h>

/**
 * main - Prints upper and lowercase alphabets
 *
 * Return: 0 Always
*/

/* Description: main - Prints upper and lowercase alphabets */

/* Return: Returns 0 value  */

int main(void)
{
	char alpha = 'a';

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	putchar(alpha);
	for (alpha = 'A'; alpha <= 'Z'; alpha++)
	putchar(alpha);
	putchar('\n');

	return (0);
}
