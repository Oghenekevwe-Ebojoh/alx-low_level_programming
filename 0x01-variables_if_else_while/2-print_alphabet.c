#include <stdio.h>

/**
 * main - this is the entry point
 *
 * Description: Print the alphabets in lower case followed by a new line
 *
 * Return: the program returns 0 when it ends
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	putchar(ch);
	putchar('\n');
	return (0);
}
