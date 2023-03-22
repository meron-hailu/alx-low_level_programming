#include <stdio.h>
#include "main.h"
/**
 * print_to_98: a function that prints from n to 98
 * @n: is the int that will use for the argument of the function
 * Return: 0
 */
void print_to_98(int n)
{
if (n < 98)
{
while (n <= 98)
{
printf("%d", n);
if (n != 98)
{
printf(", ");
}
n++;
}
}
else if (n > 98)
{
while (n >= 98)
{
printf("%d", n);
if (n != 98)
{
printf(", ");
}
n--;
}
}
else
{
printf("98");
}
printf("\n");
}
