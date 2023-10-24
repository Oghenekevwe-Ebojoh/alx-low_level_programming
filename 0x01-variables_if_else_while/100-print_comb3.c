#include <stdio.h>
/**
 * main - this is the entry point
 *
 * Description: a program that prints all possible
 * different combinations of two digits
 * Return: returns 0 when the program runs to completion
 */
int main(void)
{
	int c, f;

	for (c = 0; c <= 9; c++)
	for (f = c + 1; f <= 9; f++)
	{
		putchar(c + '0');
		putchar(f + '0');
		if (c < 8)
	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
