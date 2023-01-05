#include "main.h"
 /**
  * check - checks for square roots
  * @n: the number to find suare root of
  * @x: the resulting number
  * Return: sqrt
  */
int check(int n, int x)
{
if ((x * x) == n)
return (x);
if ((x * x) > n)
return (-1);
return (check(n, x + 1));
}
/**
 * _sqrt_recursion - returns the natural square root
 * @n: the number to find
 * Return: the square root
 */
int _sqrt_recursion(int n)
{
return (check(n, 1));
}
