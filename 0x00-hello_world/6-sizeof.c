#include <stdio.h>
#include <curses.h>
/**
 * Description: main - Printing size of various types
 *
 * Return: 0 is returned after a successfull run
 */
int main(void)
{
	printf("int is %2ld bytes\n", sizeof(int));
	printf("float is %ld bytes\n", sizeof(float));
	printf("double if %ld bytes\n", sizeof(double));
	printf("char is %ld bytes\n", sizeof(char));

	return (0);
}
