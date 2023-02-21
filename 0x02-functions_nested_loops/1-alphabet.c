#include "main.h"

/**
 * print_alphabet - prints the lowercase alphabet
 *
 * Description: This function prints all the lowercase letters of the alphabet
 *	in ascending order, followed by a newline character.
 *
 * Return: void
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
}
