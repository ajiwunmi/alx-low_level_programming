
/*
 * File: 11-print_to_98.c
 * Auth: Taiwo Aremu
 */

#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98.
 * @n: parameter
 * Return: void.
 */
void print_to_98(int n)
{
    if (n <= 98)
    {
        int i;

        for(i = n; n <= 98; i++)
        {
            printf("%d, ",i);
        }
    }
    printf("\n");
}

