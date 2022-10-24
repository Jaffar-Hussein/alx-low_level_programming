#include "lists.h"

size_t print_list(const list_t *h)
{
	size_t size;
	
	while (h != NULL)
	{
		size++;
		h = h->next;
	}

	return (size);
}
		
