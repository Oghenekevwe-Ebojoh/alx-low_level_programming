#include <stdio.h>
/**
 * main - This is the entry point of the program
 *
 * Description: Display alphabets in lower case in reverse
 * followed by a new line
 *
 * Return: This returns 0 when the program runs to completion
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	putchar(ch);
	putchar('\n');
	return (0);
}
