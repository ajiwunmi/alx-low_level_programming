<<<<<<< HEAD
#include <unistd.h>



/**
 *
 *  * _putchar - writes the character c to stdout
 *
 *   * @c: The character to print
 *
 *    *
 *
 *     * Return: On success 1.
 *
 *      * On error, -1 is returned, and errno is set appropriately.
 *
 *       */

int _putchar(char c)

{

	return (write(1, &c, 1));

}
=======

/*
 * File: 0-putchar.c
 * Auth: Ebenezer Sam-Oladapo
 */
#include "main.h"
/**
 * main - This code prints _putchar
 * Return: 0 on success
 */
int main(void)
{
	char c[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}


>>>>>>> 80534013fde4b2b5ba7a32817d56820da4b0154a
