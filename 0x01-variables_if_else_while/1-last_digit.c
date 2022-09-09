#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints if the last digit is positive, zero or negative
 *
 * Return: 0 Always
 */

/* Description: main - Prints if n is positive, zero or negative */

/* Return: return 0 value after successfull execution */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10 > 5)
	{
	printf("Last digit of %d is greater than 5\n", n);
	}
	else if (n % 10 == 0)
	{
	printf("Last digit of %d is 0\n", n);
	}
	else if (n % 10 < 6 && n % 10 != 0)
	{
	printf("Last digit of %d is less than 6 and not 0\n", n);
	}
	return (0);
}