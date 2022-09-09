#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* main - Prints whether n is positive, zero or negative */

/* Return: returns 0 after successful execution */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
	printf("%d: N is positive", n);
	}
	else if (n == 0)
	{
	printf("%d: N is zero", n);
	}
	else
	{
	printf("%d: N is negative", n);
	}
	return (0);
}
