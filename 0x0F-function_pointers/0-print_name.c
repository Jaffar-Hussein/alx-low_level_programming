#include <stdio.h>

/**
 * print_name - prints a name
 *
 * @name: address of a name
 * @f: funtion for printing
 *
 *
 */
void print_name(char *name, void (*f)(char *))
{
if (!name || !f)
return;
f(name);
}
