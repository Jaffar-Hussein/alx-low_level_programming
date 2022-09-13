#include <stdio.h>
void print_alphabet_x10(void);
/**
 * main - Prints out 10 times the alphabet
 *
 * Return: returns 0
 */
int main(void)
{
    print_alphabet_x10();
    return (0);
}
void print_alphabet_x10(void)
{
	int i;
	int j;
	for (i = 0; i < 10; i++)
	{
		for (j = 97; j < 123; j++)
		{
			putchar(j);
		}
		putchar('\n');
	}
}
