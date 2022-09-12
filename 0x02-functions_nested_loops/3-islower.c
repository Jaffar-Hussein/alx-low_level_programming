#include <stdio.h>
/**
 * _islower - checks if ots lower case
 *
 * @c:  char entered
 *
 * Return: 1 if lower 0 otherwise
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	return (0);
}
