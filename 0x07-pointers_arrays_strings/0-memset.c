#include "main.h"
/**
 * _memset - fills the memory with constant byte
 * @s: the memory area
 * @b: the character to fill the memory area
 * @n: index
 * Return: *s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
