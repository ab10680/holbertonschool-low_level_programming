#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point for the calculator program.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line arguments.
 *
 * Return: Always 0 on success.
 */
int main(int argc, char *argv[])
{
int num1, num2;
int (*operation)(int, int);
/* Check 4 correct number of arguments & ensure operator is single char */
if (argc != 4 || argv[2][1] != '\0')
{
printf("Error\n");
exit(98 + (argv[2][1] != '\0'));
/* Exit with 98 for argument error, 99 for operator error */
}
/* Convert the first and third arguments to integers */
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
operation = get_op_func(argv[2]); /* Get the operation function */
/* Check if the operation is valid or for division by zero */
if (operation == NULL ||
((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0))
{
printf("Error\n");
exit(operation == NULL ? 99 : 100);
/* Exit with 99 for invalid operator, 100 for division by zero */
}
/* Perform the operation and print the result */
printf("%d\n", operation(num1, num2));
return (0);
}
