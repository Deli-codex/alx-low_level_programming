#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Return: 0 (success)
 */
int main(void)
{
	int n, lastNUM;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastNUM = n % 10;
	if (lastNUM > 5)
		printf("last digit of %d and %d is greater than 5\n", n, lastNUM);
	else if (lastNUM == 0)
		printf("last digit of %d is %d and is 0\n", n, lastNUM);
	else
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, lastNUM);
	return (0);
}
