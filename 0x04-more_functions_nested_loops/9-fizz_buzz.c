#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the numbers from 1 to 100
 * if the number is multiply of 3, it prints Fizz instead of the number
 * If multiply of 5, print Buzz instead of the number
 * If multiply of 3 & 5, print FizzBuzz instead of the number
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
char f[] = "Fizz";
char b[] = "Buzz";
char fb[] = "FizzBuzz";
for (i = 1; i <= 100; i++)
{
if (i == 100)
printf("%s", b);
else if ((i % 3 == 0) && (i % 5 == 0))
printf("%s ", fb);
else if (i % 3 == 0)
printf("%s ", f);
else if (i % 5 == 0)
printf("%s ", b);
else
printf("%d ", i);
}
printf("\n");
return (0);
}
