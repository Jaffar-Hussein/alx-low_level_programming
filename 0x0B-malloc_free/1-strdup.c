#include <stdlib.h>

/**
 * *_strdup - returns a pointer duplicate of string
 *
 * @*str: String to be duplicated
 *
 * Return: Null if str is null pointer otherwise
 */
char *_strdup(char *str)
{
	int length;
	int i;
	int j;
	char *dup;

	length = 1;
	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}		
	if (str == NULL)
	{
		return (str);
	}
	dup = malloc(sizeof(char) * length);
	for (j = 0; j < length; j++)
	{
		dup[j] = str[j];
	}
	return (dup);	
}
