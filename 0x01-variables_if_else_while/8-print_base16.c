#include <stdio.h>
/**
 * main - main block
 * Description: prints all single digit number of base 10
 * starting from 0, followed by a new line
 * Return: 0
 */
int main(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
	putchar(digit);
	}
	for (digit = 'a'; digit <= 'f'; digit++)
	{
	putchar(digit);
	}

	putchar('\n');
	return (0);
}
