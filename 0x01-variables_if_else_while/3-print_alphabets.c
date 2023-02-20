#include <stdio.h>
/**
 * main - main block
 * Description: print the alphabet in lower case
 * and in the uppercase, follow by a new line
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	c = 'A';
	while (c <= 'z')
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
