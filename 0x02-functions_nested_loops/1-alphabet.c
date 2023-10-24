#include "main.h"
/**
 * main - this is the entry point
 *
 * Description: function that prints the alphabet, in lowercase
 *
 * Return: this rerturns 0 when the code runs complete
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}
