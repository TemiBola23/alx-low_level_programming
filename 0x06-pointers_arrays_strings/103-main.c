#include <stdio.h>
#include "main.h"

/**
 * print_result - prints the result of the addition
 * @n1: first number
 * @n2: second number
 * @result: result of the addition
 * @r_len: length of the result array
 */
void print_result(char *n1, char *n2, char *result, int r_len)
{
	char *res = infinite_add(n1, n2, result, r_len);

	if (res == 0)
	{
		printf("Error\n");
	}
	else
	{
		printf("%s + %s = %s\n", n1, n2, res);
	}
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *n, *m, r[100], r2[10], r3[11];

	n = "12345678924345743678235745756784776857856456858768767745
		86734734563456453743756756784458";
	m = "903479066347069723468291456934625963495869324659732465976
		2347956349265983465962349569346";
	print_result(n, m, r, 100);

	n = "1234567890";
	m = "1";
	print_result(n, m, r2, 10);

	n = "999999999";
	m = "1";
	print_result(n, m, r2, 10);
	print_result(n, m, r3, 11);

	return (0);
}
