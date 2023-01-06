#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: string
 * @s2: string
 * Return: 0 if matching, and ns1 - ns2 if not matching
 */
int _strcmp(char *s1, char *s2)
{
int x = 0, diff = 0;
while (1)
{
if (s1[x] == '\0' && s2[x] == '\0')
break;
else if (s1[x] == '\0')
{
diff = s2[x];
break;
}
else if (s2[x] == '\0')
{
diff = s1[x];
break;
}
else if (s1[i] != s2[x])
{
diff = s1[x] - s2[x];
break;
}
else
x++;
}
return (diff);
}
