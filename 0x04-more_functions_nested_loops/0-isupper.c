#include "main.h"
#include <stdio.h>
/**
 * _isupper - a function that checks for upper case character.
 * @c: is an input character
 * Returns: 1 if c is uppercase or 0 otherwise
 */
int _isupper(int c)
{
char uppercase = 'A';
int isupper = 0;
for (; uppercase <= 'X'; uppercase++)
{
if (c == uppercase)
{
isupper = 1;
break;
}
}
return (isupper);
}
