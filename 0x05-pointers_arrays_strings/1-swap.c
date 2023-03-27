#include "main.h"
/**
 * swap_int - a function that swaps two integers
 * @a: first paramter
 * @b: second paramter
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
