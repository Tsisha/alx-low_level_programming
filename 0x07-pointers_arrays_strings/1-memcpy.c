#include "main.h"
/**
 * *_memcpy -  copies memory area
 * @dest: destination
 * @src: source
 * @n: bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
for (; i < n; i++)
dest[i] = src[i];
return (dest);
}
