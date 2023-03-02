#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program modifies the value of an integer variable
 *              indirectly through a pointer to print a specific value.
 *              Only one statement is allowed and the variable 'a' cannot
 *              be used or modified.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int n;
        int a[5];
        int *p;

        a[2] = 1024;
        p = &n;

        *(p + 5) = 98;

/* ...so that this prints 98\n */
        printf("a[2] = %d\n", a[2]);
        return (0);
}
