#include <stdio.h>
#include "main.h"

/**
 * fizz_buzz - prints FizzBuzz from 1 to 100
 */
void fizz_buzz(void)
{
int i; /* Declare the loop variable outside the loop */
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz");
}
else if (i % 3 == 0)
{
printf("Fizz");
}
else if (i % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%d", i);
}
if (i < 100)
{
printf(" "); /* Print space between numbers/words */
}
}
printf("\n"); /* New line at the end */
}

/**
 * main - Entry point of the program
 *
 * Return: Always 0.
 */
int main(void)
{
fizz_buzz(); /* Call the FizzBuzz function */
return (0); /* Ensure parentheses are present */
}
