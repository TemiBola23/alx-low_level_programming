#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar("abcdefghijklmnopqrstuvwxyz"[i]);
	}
	putchar('\n');
	return (0);
}