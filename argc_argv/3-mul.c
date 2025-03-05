#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: 0 on success, 1 if error
 */
int main(int argc, char *argv[])
{
int num1, num2, result; /* Declare variables at the beginning */
if (argc != 3) /* Check if exactly two arguments are provided */
{
printf("Error\n");
return (1);
}
num1 = atoi(argv[1]); /* Convert first argument to integer */
num2 = atoi(argv[2]); /* Convert second argument to integer */
result = num1 *num2; /* Multiply the two numbers */
printf("%d\n", result); /* Print the result */
return (0);
}
