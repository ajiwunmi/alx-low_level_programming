#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -Entry point
 *
 * Description: 'Checks a random number if positive, negative or Zero'
 *
 * Return: return 0 to indicate end of program
 */
int main(void)
{

	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	if (last_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	}
	if (last_digit == 0)
	{
        	printf("Last digit of %d is %d and is 0\n", n, last_digit);
	}
	if (last_digit < 6 && last_digit != 0)
	{
		printf("Last digit of %d is %d and is less than 5\n", n, last_digit);
	}
	return (0);

}
