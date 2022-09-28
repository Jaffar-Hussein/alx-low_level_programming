#include <stdio.h>

/**
 * _puts_recursions - prints a string followed by a new line
 *
 *  Return: Always 0
 */
void _puts_recursion(char *s)
{
	if(*s != '\0')
	{
		putchar(s);
		_puts_recursion(s + 1);
	}
}
