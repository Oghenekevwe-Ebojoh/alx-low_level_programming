#include <stdio.h>
/**
 * main - this is the entry point
 *
 * Description: program that prints all possible
 * different combinations of three digits
 *
 * Return: returns 0 when the code runs to completion
 */
int main(void)
{
	int c, f, k;

	for (c = 0; c <= 9; c++)
	for (f = c + 1; f <= 9; f++)
	for (k = f + 1; k <= 9; k++)
	{
		putchar(c + '0');
		putchar(f + '0');
		putchar(k + '0');
		if (c < 7)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
