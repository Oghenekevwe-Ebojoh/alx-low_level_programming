#include <stdio.h>
/**
 * main - this is the entry point
 *
 * Description: prints the alphabets in lower case and upper case
 * followed by a new line
 *
 * Return: This returns 0 when the code runs to completion
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
	putchar(ch);
	putchar('\n');
	return (0);
}
