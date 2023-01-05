#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find square root off
 * Return: the square root of a number
 */
int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));
}
 /**
  * _sqrt - square root
  * @n: the number to find suare root of
  * @x: the resulting number
  * Return: a number
  */
int _sqrt(int n, int x)
{
if ((x * x) == n)
return (x);
if ((x * x) > n)
return (-1);
return (_sqrt(n, x + 1));
}
