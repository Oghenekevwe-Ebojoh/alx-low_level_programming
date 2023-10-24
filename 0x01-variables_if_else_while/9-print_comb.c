#include <stdio.h>
/**
 * main - This is the entry point of the program
 *
 * Description: this program writes all possible combination
 * of all single digits
 *
 * Return: This returns 0 when the program runs completely
 */
int main(void)
{
	int ch;

	for (ch = '0'; ch <= '9'; ch++)
	putchar(ch);

	if (ch != '9')
	putchar(',');
	putchar(' ');	
	putchar('\n');
	return (0);
}
