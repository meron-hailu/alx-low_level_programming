#include "main.h"
/**
 * _puts - a function that prints a string
 * @str: paramter
 * Return: Always 0.
 */
void _puts(char *str)
{
int c;
for (c = 0; str[c] != 0; c++)
{
_putchar(str[c]);
}
_putchar('\n');
}
