#include "main.h"
/**
 * main - This is the entry point
 *
 * Description: function that prints 10 times the alphabet, in lowercase
 *
 * Return: this returns 0 when the code runs complete
 */
void print_alphabet_x10(void)
{
	char c, n;

	for (n = 0; n <= 9; n++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
