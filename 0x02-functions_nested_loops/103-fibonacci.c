#include <stdio.h>

/**
 * main - Prints the sum of the even-valued up to 4,000,000
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j, k, sum;

	i = 1;
	j = 2;
	sum = 2;

	while (j <= 4000000)
	{
	k = i + j;
	i = j;
	j = k;
	if (j % 2 == 0)
	{
	sum += j;
	}
	}
	printf("%d\n", sum);
	return (0);
}
