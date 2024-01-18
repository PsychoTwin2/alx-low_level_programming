#include <stdio.h>
#include <stdlib.h>
/**
 *Description : a function that allocates memory using malloc
 *@n -> the size of the memory to alloc
 * exit(98) -> If mem alloc failed
 * Returns a pointer to the allocated memory
*/
void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if( ptr == NULL)
	{
		printf("Memory allocation failed\n");
		exit(98);
	}
	return ptr;
}
