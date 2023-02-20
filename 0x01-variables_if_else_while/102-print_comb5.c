#include <stdio.h>
/**
 * main - main block
 * Description: A program that meets all the requirements
 * The combination of numbers must be separated by comma, followed by a space
 * different combination of digits
 * Return: 0
 */
int main(void)
{
	int i, j;
	for (i = 0; i < 100; i++)

	{
	for (j = i; j < 100; j++)
	{
		if (i == j)
		{
			continue;
		}
		int smallest = i'*'100 + j;
		int smallest_rev = j'*'100 + i;
		
		if (smallest_rev < smallest)
		{
			continue;
		}
		putchar(i'/'10+'0');
		putchar(i'%'10+'0');
		putchar(' ');
		putchar(j'/'10+'0');
		putchar(j'%'10+'0');
		if (i < 99);
				{
					putchar(',');
					putchar(' ');
				}
	}
	}
	return (0);
}
