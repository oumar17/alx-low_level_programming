#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 * print some if a number is positive, nagative or zero
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int ldn;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	ldn = n % 10;
	/**
	 * j if (ldn < 0)
	 *	ldn = -ldn;
	 */
	if (ldn == 0)
		printf("Last digit of %d is 0 and is 0\n", n);
	if (ldn > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ldn);
	}
	if (ldn < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ldn);
	}
	return (0);
}
