#include <stdio.h>
/**
 * main - this is the entry point
 *
 * Description: program that prints all possible combinations
 * of two two-digit numbers
 *
 * Return: this returns 0 when the program runs complete
 */
int main(void)
{
	int c, f;

	for (c = 0; c <= 99; c++)
	for (f = c + 1; f <= 99; f++)
	{
		putchar((c / 10) + '0');
		putchar((c % 10) + '0');
		putchar(32);
		putchar((f / 10) + '0');
		putchar((f % 10) + '0');
		if (c < 98)
		{
			putchar(',');
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
