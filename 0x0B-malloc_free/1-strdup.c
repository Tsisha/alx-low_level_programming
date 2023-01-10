#include "main.h"
/**
 * *_strdup - return a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: string
 * Return: 0
 */
char *_strdup(char *str)
{
char *z;
int x, y;
if (str == NULL)
return (NULL);
for (x = 0; str[x]; x++)
y++;
z = malloc(sizeof(char) * (y + 1));
if (z == NULL)
return (NULL);
for (x = 0; str[x]; x++)
{
z[x] = str[x];
}
z[y] = '\0';
return (z);
}
