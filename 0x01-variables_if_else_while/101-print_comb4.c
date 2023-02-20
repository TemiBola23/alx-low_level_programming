#include <stdio.h>
/**
 * main - main block
 * Description: write a program that prints all posible
 * different combination of two digits
 * Numbers must be separated by ,, followed by a space
 * The two digits must be different
 * You are not allowed to use any variable of type char
 * All your code should be in the main function
 * Return: 0
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i < 7; i++)
	{
		for (j = i+1; j < 8; j++)
		{	
			for (k = j+1; k < 9; k++)
			{	
			int smallest = i*100 + j*10 + k;
				if (smallest == 120 || smallest == 102 || smallest == 201 || smallest == 210 || smallest == 021 || smallest == 012)
				{
				continue;
					{
						putchar(i+'0');
						putchar(j+'0');
						putchar(k+'0');
						if (i < 6)
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}		
		return 0;
}

