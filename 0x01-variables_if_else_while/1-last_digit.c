#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int ls;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ls = n % 10;
	/* your code goes there */
	if (ls > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ls);
	}
	else if (ls == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, ls);
	}
	else if (ls < 6 && ls != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ls);
	}
	return (0);
}