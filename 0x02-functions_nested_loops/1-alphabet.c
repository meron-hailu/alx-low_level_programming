#include "main.h"
#include <stdio.h>
/**
*print_alphabet - prints the alphabets
*
* Return: no return type
**/
void print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
putchar('\n');
}
