#include <stdio.h>

/**
 * print_alphabet - prints all lower case alphabets
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	for (int i = 97; i < 123; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
