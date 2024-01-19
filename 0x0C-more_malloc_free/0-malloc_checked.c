#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *Description : a function that allocates memory using malloc
 *@n -> the size of the memory to alloc
 * exit(98) -> If mem alloc failed
 * Returns a pointer to the allocated memory
*/
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if( ptr == NULL)
	{
		exit(98);
	}
	return ptr;
}
