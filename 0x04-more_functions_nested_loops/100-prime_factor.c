#include <stdio.h>
/**
 * main - print the largest prime factor of the number 612852475143
 * Return: Success Always
 */
int main(void)
{
long int n = 612852475143;
long int x;
for (x = 2; x < n; x++)
{
if (n % x == 0)
{
n = n / x;
}
}
printf("%ld\n", x);
return (0);
}
