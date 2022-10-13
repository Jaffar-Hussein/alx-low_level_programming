#include <stdio.h>

/**
 * int_index - returns index of the first element for which cmp c returns
 *
 *
 * @array:an array
 * @size: number of elements in the array
 * @cmp: pointer to a function that returns
 *
 * Return: 0 or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
