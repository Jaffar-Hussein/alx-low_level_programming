#include <stdio.h>

/**
 * array_iterator - function that iterated pover array
 * @size:size of array
 * @action:does something to element
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
