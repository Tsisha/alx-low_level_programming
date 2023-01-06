#include "main.h"
/**
 * _strpbrk - Search a string for any of a set of bytes.
 * @s: string
 * @accept: matches
 * Return: Pointer to the byte in `s`or NULL if not.
 */
char *_strpbrk(char *s, char *accept)
{
int x;
while (*s)
{
for (x = 0; accept[x]; x++)
{
if (accept[x] == *s)
return (s);
}
s++;
}
return ('\0');
}
