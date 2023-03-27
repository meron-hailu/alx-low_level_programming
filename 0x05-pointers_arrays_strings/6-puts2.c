#include "main.h"
/**
 * puts2 - function that prints 1 char/2 of a string.
 * @str: parameter
 * Return: Always 0.
 */
void puts2(char *str)
{
int c;
char l;
for (c = 0; str[c] != 0; c++)
{
if (c % 2 == 0)
{
l = str[c];
_putchar(l);
}
}
_putchar('\n');
}
