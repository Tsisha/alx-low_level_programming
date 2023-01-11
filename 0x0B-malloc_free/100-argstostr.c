#include "main.h"
/**
 * argstostr - a function that concatenates all the arguments
 *@ac: count of args passed to the function
 *@av:array of arguments
 *Return: pointer to the new string
 */
char *argstostr(int ac, char **av)
{
char *z;
int x = 0, y = 0, a = 0, b = 0;
if (ac == 0 || av == NULL)
return (NULL);
while (y < ac)
{
a = 0;
while (av[y][a] != '\0')
{
x++;
a++;
}
y++;
}
x = x + ac + 1;
z = malloc(sizeof(char) * x);
if (z == NULL)
{
return (NULL);
}
for (y = 0; y < ac; y++)
{
for (a = 0; av[y][a] != '\0'; a++)
{
z[b] = av[y][a];
b++;
}
z[b] = '\n';
b++;
}
return (z);
}
