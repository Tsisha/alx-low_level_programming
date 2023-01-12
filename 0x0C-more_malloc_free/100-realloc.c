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
void *x;
unsigned int y;
if (ptr == NULL)
{
x = malloc(new_size);
return (x);
}
else if (new_size == old_size)
return (ptr);
else if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
else
{
x = malloc(new_size);
if (x != NULL)
{
for (y = 0; y < min(old_size, new_size); y++)
*((char *)x + y) = *((char *) ptr + y);
free(ptr);
return (x);
}
else
return (NULL);
}
}
