#include <stdio.h>
/**
 * main - this is the entry point of the program
 *
 * Description: Prints single digits of the base 10 digits
 * followed by a new line
 * Return: this returns 0 when the program runs to completion
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	putchar(n + '0');
	putchar('\n');
	return (0);
}
