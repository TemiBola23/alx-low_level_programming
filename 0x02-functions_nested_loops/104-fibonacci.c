#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int i, j, k, n;

	i = 1;
	j = 2;
	printf("%lu, %lu, ", i, j);
	for (n = 2; n < 98; n++)
	{
	k = i + j;
	i = j;
	j = k;
	if (n < 97)
	printf("%lu, ", k);
	else
	printf("%lu\n", k);
	}
	return (0);
}
