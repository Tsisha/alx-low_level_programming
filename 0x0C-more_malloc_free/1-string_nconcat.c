#include "main.h"
/**
 *string_nconcat - Concatenates two strings
 *@s1: string
 *@s2: string
 *@n: The maximum number of bytes
 *Return: NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *x;
unsigned int len = n, index;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (index = 0; s1[index]; index++)
len++;
x = malloc(sizeof(char) * (len + 1));
if (x == NULL)
return (NULL);
len = 0;
for (index = 0; s1[index]; index++)
concat[len++] = s1[index];
for (index = 0; s2[index] && index < n; index++)
x[len++] = s2[index];
x[len] = '\0';
return (x);
}
