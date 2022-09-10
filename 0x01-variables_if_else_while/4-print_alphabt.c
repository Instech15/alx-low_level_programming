#include <stdio.h>

/** main - Prints alphabets without q and e
 *
 *
 * Return: 0 Always
*/

/* Description: main - prints letters minus e and q*/
/* Return: return 0 after execution */
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
