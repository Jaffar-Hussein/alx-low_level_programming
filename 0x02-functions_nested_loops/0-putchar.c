#include <stdio.h>

/**
 * main - prints _putchar followed by new line
 *
 * Return: Should return 0
 *
 */
int main(void)
{
	char *s = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		putchar(s[i]);
	}
	putchar('\n');
	return (0);
}
