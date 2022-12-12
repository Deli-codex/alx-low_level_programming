#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Return: 0 (success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastNUM = n % 10;
	if (lastNUM > 5)
		printf("last digit of %d %d and is greater than 5\n", n, lastNUM);
	else if (lastNUM == 0)
		printf("last digit of %d is %d and is 0\n", n, lastNUM);
	else
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, lastNUM);
	return (0);
}

