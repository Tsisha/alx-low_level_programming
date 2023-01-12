#include "main.h"
/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to the memory
 * @old_size: size
 * @new_size: size of the new memory
 * Return: NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *x, *z;
unsigned int y;
if (ptr != NULL)
x = ptr;
else
{ return (malloc(new_size)); }
if (new_size == old_size)
return (ptr);
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (0);
}
z = malloc(new_size);
if (z != NULL)
return (0);
for (y = 0; y < (old_size || i < new_size); y++)
{
*(z + y) = x(y);
}
free(ptr);
return (z);
}
