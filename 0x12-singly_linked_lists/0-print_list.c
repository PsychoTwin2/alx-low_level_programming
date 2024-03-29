#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
 * print_list - ......
 * @h: name of the list
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
		printf("[%d] %s\n", h->len, h->str);
		}
		count++;
		h = h->next;
	}
	return (count);
}
