#include "main.h"

/**
 * _strlen_recursion - size.
 * @s: the string to pointer
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
if (!*s)
{
return (0);
}
return (1 + _strlen_recursion(++s));
}
/**
 * string - check if s is palindrome.
 * @s: string base address.
 * @x: index.
 * @y: index.
 * Return: 1 if string is palindrome, 0 otherwise.
 */
int string(char *s, int x, int y)
{
if (s[x] == s[y])
if (x > y / 2)
return (1);
else
return (string(s, x + 1, y - 1));
else
return (0);
}
/**
 *
 * is_palindrome - palindrome
 * @s: string base address
 * Return: recursion
 */
int is_palindrome(char *s)
{
return (string(s, 0, _strlen_recursion(s) - 1));
}
