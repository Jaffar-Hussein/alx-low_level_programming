#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 *
 * @*s:The string entered
 *
 *  Return: Always 0
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_puts_recursion(s + 1);
		_putchar(*s);
	}
}
