#include <stdio.h>
#include <string.h>

/**
 * main - prints _putchar followed by new line
 *
 * Return: Should return 0
 *
 */
int main(void)
{
	char *s = "_putchar";

	for (int i; i < strlen(s); i++)
	{
		putchar(s[i]);
	}
	putchar('\n');
	return (0);
}
