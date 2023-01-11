#include "main.h"
/**
 * str_concat - concatenates two strings.
 *@s1:First string
 *@s2:Second string
 *Return: NULL in case of failure
 */
char *str_concat(char *s1, char *s2)
{
char *z;
int x, y = 0,  a = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (x = 0; s1[x] || s2[x]; x++)
a++;
z = malloc(sizeof(char) * a);
if (z == NULL)
return (NULL);
for (x = 0; s1[x]; x++)
z[y++] = s1[x];
for (x = 0; s2[x]; x++)
z[y++] = s2[x];
return (z);
}
