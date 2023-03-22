#include "main.h"
#include <stdio.h>
/**
 * fibonacci - a function returns the first 100 fibonacci
 * @n: first number input
 * Return: one + two
 */
int fibonacci(int n) 
{
if (n == 0) {
return (0);
}
else if (n == 1) 
{
return (1);
} 
else 
{
return (fibonacci(n-1) + fibonacci(n-2));
}
}
