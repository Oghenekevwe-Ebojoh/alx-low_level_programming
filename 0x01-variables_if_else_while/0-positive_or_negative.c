#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - All programs start running from here
 *
 * Description: This progran runs a loop that prints the different value of n
 *
 * Return: 0 when program runs completely
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
	printf("%i is zero\n", n);
	else if (n > 0)
	printf("%i is positive\n", n);
	else

	printf("% i is negative\n", n);

	return (0);
}
