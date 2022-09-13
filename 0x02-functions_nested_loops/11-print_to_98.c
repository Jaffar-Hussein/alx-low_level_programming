#include <stdio.h>

/*
 * print_to_98 - prints to 98
 *
 */
void print_to_98(int n)
{
	while(n <= 98)
	{
		putchar(n+48);
		putchar(44);
		putchar(32);
		n ++;
	}
}

