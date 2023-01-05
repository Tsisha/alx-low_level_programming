#include "main.h"
 /**
  * _sqrt - checks for square roots
  * @y: int
  * @x: int
  * Return: int
  */
int _sqrt(int y, int x)
{
if ((x * x) == y)
return (x);
if ((x * x) > y)
return (-1);
return (_sqrt(y, x + 1));
}
/**
 * _sqrt_recursion - returns the natural square root
 * @n: the number to find
 * Return: the square root or -1
 */
int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));
}
