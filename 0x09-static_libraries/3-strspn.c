#include "main.h"
/**
 * *_strspn - return the number of occurent of a string
 * @s: string to check
 * @accept: character to match
 * Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int bytes = 0;
int x;
while (*s)
{
for (x = 0; accept[x]; x++)
{
if (accept[x] == *s)
{
bytes++;
break;
}
else if ((accept[x + 1]) == '\0')
return (bytes);
}
s++;
}
return (bytes);
}
