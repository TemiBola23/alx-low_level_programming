#include "main.h"

/**
 * print_nunbers - prints nunbers from 0 to 9.
 *
 * Return: nothing on success
 */

void print_nunbers(void)
{
	int start = 0, end = 9;

	while (start <= end)
	{
		_putchar(start + '0');
		start++;
	}
	_putchar('\n');
}

