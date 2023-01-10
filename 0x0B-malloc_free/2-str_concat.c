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
int x, a = 0,  y = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (x = 0; s1[x] || s2[x]; x++)
y++;
z = malloc(sizeof(char) * y);
if (z == NULL)
return (NULL);
for (x = 0; s1[x]; x++)
z[a++] = s1[x];
for (x = 0; s2[x]; x++)
z[a++] = s2[x];
return (z);
}
