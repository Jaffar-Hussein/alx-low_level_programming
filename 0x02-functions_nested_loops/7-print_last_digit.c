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
	int abs_n = int _abs(n);

	return (abs_n % 10);
}
