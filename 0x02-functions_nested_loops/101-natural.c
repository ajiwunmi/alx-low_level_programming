/*
 * File: 7-print_last_digit.c
 * Auth: Aremu Taiwo
 *
 */

#include "main.h"
/**
 * 101-natural - prints the sum of all multiples of 3 and 5.
 * 
 * Return: int sum of multiples.
 */
void print_sum_natural()
{
	int b = 3;
	int a = 5;
	int i = 1;
	int sum = 0;

	while (i < 1024)
	{
		if ( i % a == 0 || i % b == 0)
			sum += i;
		_putchar(sum);
		_putchar('\n');
	}
	
}
