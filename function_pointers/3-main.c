#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

int main(int argc, char *argv[])
{
int num1, num2;
int (*operation)(int, int);
/* Check for the correct number of arguments */
if (argc != 4)
{
printf("Error\n");
exit(98);
}
/* Convert the first and third arguments to integers */
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
/* Ensure the operator argument is a single character */
if (argv[2][1] != '\0')
{
printf("Error\n");
exit(99);
}
operation = get_op_func(argv[2]); /* Get the operation function */
/* Check if the operation is valid */
if (operation == NULL)
{
printf("Error\n");
exit(99);
}
/* Check for division by zero */
if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
{
printf("Error\n");
exit(100);
}
/* Perform the operation and print the result */
printf("%d\n", operation(num1, num2));
return (0);
}
