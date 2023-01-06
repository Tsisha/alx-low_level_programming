#include "main.h"           
/**
 * _islower - a function that checks for lowercase character
 * @c: tha character
 * Return: 1 if c is lowercase, if noa 0                
 */  
int _islower(int c)               
{
if (c >= 'a' && c <= 'z')        
return (1);               
else        
return (0);               
}
