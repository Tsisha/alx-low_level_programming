#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generate password
 * Return: generated password
 */
int main(void)
{
char x;
int y;
srand(time(0));
while (y <= 2601)
{
x = rand() % 148;
y += x;
putchar(x);
}
putchar(270 - y);
return (0);
}
