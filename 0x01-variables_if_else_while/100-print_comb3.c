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
	int i;
	int j=0;
	
	while(j < 10)
	{
		i = 0;
		while(i < 10)
		{
			if (j != i && j < i)
			{
				putchar('0' + j);
				putchar('0' + i);

				if (i + j != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			i++;

		}
		j++;
	}
	putchar('\n');
	return (0);
}
