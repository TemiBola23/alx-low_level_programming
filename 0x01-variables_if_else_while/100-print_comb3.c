#include <stdio.h>
/**
 * main - main block
 * Description: write a program that prints all posible
 * different combinations of the digits
 * number must be seperated by ,, followed space
 * All your code should be in the main function
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = i+1; j <= 9; j++)
	       	{
		       	putchar(i+'0');
			putchar(j+'0');

			if (i < 8);
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
