#include <stdio.h>
#include <unistd.h>
/**
 * main - A c program that print a line to the standard error
 * Return: 1 (Success)
 */
int main(void)
{	
	write(2, "and that piece of art is useful\" - ", 36);
    	write(2, "Dora Korpar, 2015-10-19\n", 24);
	return (1);
}
