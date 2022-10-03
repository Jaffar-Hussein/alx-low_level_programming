#include <stdlib.h>
/**
 * *create_array - The array that is returned
 *
 * @size: The size of the array
 * @c: First letter
 * Return: null if size is 0
 */

char *create_array(unsigned int size, char c)
{
	char *array;

	array = malloc(size);

	if (array == NULL || size == 0)
	{
		return (NULL);
	}
	array[0] = c;
	return (array);
}
