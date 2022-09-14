#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * @n:The number 
 *
 * Return: the last didgin of the number
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n *= -1;
		_putchar(n % 10);
		return (n % 10);
	}
	else
	{
		_putchar(n % 10);
		return (n % 10);
	}
}
