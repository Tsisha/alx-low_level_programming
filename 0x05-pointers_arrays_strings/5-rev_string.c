#include "main.h"
/**
 * rev_string - reverse a string.
 * @s: the string to be reversed.
 */
void rev_string(char *s)
{
int length, x, y;
char z1, z2;
for (length = 0; s[length] != '\0'; length++)
{
}
x = length - 1;
y = 0;
while (x > y)
{
z1 = s[y];
z2 = s[x];
s[y] = z2;
s[x] = z1;
x--;
y++;
}
}
