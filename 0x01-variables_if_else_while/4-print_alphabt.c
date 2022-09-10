/**
 * Description: main - Prints letter except for q and e
 *
 * Return: 0 Always
 */
#include <stdio.h>

/* Description - main - Prints letters in lowercase except for and q */

/* Return: 0 Always */
int main(void)
{
	char alpha = 'a';

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
	if (alpha != 'e' && alpha != 'q')
	putchar(alpha);
	}
	putchar('\n');

	return (0);
}
