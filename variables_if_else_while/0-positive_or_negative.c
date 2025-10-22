#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - assigns a random number to n and prints
 * whether it is positive, negative or zero
 *
 * Return: 0
 */

int main(void)
{
	int n;

	/* Do not touch this part */
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* Your code starts here */
	printf("%d is ", n);

	if (n > 0)
		printf("positive\n");
	else if (n == 0)
		printf("zero\n");
	else
		printf("negative\n");

	return (0);
}
