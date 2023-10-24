#include <stdio.h>
/**
 * main - This is the entry point of the program
 *
 * Description: Prints the alphabets in lowercase followed by a new line
 * except the letters q and e
 *
 * Return: this returns 0 when the code runs to completion
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	if (ch != 'q' && ch != 'e')
	putchar(ch);
	putchar('\n');
	return (0);
}
