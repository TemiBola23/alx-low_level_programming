#include <stdio.h>
/**
 * main - main block
 * Description: prints all single number of base 10
 * starting from 0, followed by a new line
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
	for (j = i; j < 10; j++)
	{
	putchar(i + '0');
	putchar(',');
	putchar(' ');
	putchar(j + '0');
	putchar(j == 9 ? '\n' : ' ');
	}
	}
	return (0);
}
