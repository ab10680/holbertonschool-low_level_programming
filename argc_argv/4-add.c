#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: 0 on success, 1 if error
 */
int main(int argc, char *argv[])
{
int sum = 0; /* Variable to store the sum */
int i, j;
if (argc == 1) /* Check if no arguments are passed */
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++) /* Loop through each argument */
{
for (j = 0; argv[i][j] != '\0'; j++) /* Check each character */
{
if (!isdigit(argv[i][j])) /* If character is not a digit */
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[i]); /* Add the number to the sum */
}
printf("%d\n", sum); /* Print the result */
return (0);
}
