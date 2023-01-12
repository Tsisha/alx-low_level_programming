#include "main.h"
/**
 * _calloc - allocate memory
 *@nmemb: number of elements
 *@size: size of the memory
 *Return: NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *x;
unsigned int y;
if (nmemb == 0 || size == 0)
return (NULL);
x = malloc(nmemb * size);
if (x != NULL)
{
for (y = 0; y < (nmemb * size); y++)
x[y] = 0;
return (x);
}
else
return (NULL);
}
