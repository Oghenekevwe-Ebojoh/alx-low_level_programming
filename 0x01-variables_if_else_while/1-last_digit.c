#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This is entry point of the program where the execution starts
 *
 * Description: Prints the last digit of the number stored in variable n
 *
 * Return: zero when the program terminates
 */
int main(void)
{
	int n, n_last_d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	n_last_d = n % 10;

	if (n_last_d > 5)
	printf("Last digit of %i is %i and is greater than 5\n", n, n_last_d);
	else if (n_last_d == 0)
	printf("Last digit of %i is %i and is 0\n", n, n_last_d);
	else
	printf("Last digit of %i is %i and is less than 6 and not 0\n", n, n_last_d);
	return (0);
}
