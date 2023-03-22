#include "main.h"
#include <limits.h>
/**
 * print_last_digit - a function that prints the last digit of a number.
 * @n:  An int argument
 * Return: 0
 */
int print_last_digit(int n)
{
int n;
n = (n % 10);
if (n < 0)
{
n = (-1 * n);
}
_putchar(n + '0');
return (n);
}
