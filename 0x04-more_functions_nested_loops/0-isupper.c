#include "main.h"
/**
 * _isupper - A function that checks for upper case character.
 * @c: An input character
 *
 * Return: 1 if c is uppercase or 0 otherwise
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'y')
{
return (1);
}
return (0);
}
