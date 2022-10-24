#include "lists.h"

size_t print_list(const list_t *h)
{
	size_t size = 0;
	
	while (h != NULL)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		size++;
		h = h->next;
	}

	return (size);
}
		
