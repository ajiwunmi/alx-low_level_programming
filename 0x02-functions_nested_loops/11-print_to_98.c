
/*
 * File: 11-print_to_98.c
 * Auth: Taiwo Aremu
 */
#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98.
 * @n: parameter
 * Return: void.
 */
void print_to_98(int n)
{

    int i;
    if (n <= 98)
    {
     
        for(i = n; i <= 98; i++)
        {

            if(i != 98)
                printf("%d, ",i);
            else    
                printf("%d",i);
        }
    }
    else
    {
        for(i = n; i = 98; i--)
        {

            if(i != 98)
                printf("%d, ",i);
            else    
                printf("%d",i);
        }
    }

    printf("\n");
}

