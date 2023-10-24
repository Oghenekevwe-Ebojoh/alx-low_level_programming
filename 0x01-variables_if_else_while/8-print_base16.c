#include <stdio.h>
/**
 * main - This is the entry point of the program
 *
 * Description: prints all the numbers of base 16 in lowercase
 * followed by a new line
 * Return: This returns 0 when the program runs to completion
 */
int main(void)
{
	char base_16;

	for (base_16 = 48; base_16 <= 57; base_16++)
	putchar(base_16);

	for (base_16 = 97 ; base_16 <= 102; base_16++)
	putchar(base_16);
	putchar ('\n');
	return (0);
}
