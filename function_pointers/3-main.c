#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

int main(int argc, char *argv[])
{
int num1, num2;
int (*operation)(int, int);
if (argc != 4)  /*  Check for the correct number of arguments */
{
printf("Error\n");
exit(98);
}
num1 = atoi(argv[1]);  /* Convert the first argument to an integer */
num2 = atoi(argv[3]);  /* Convert the second argument to an integer */
operation = get_op_func(argv[2]);  /* Get the operation function */
if (operation == NULL)  /* Check if the operation is valid */
{
printf("Error\n");
exit(99);
}
if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)  /* Check for division by zero */
{
printf("Error\n");
exit(100);
}
printf("%d\n", operation(num1, num2));  /* Perform the operation and print the result */
return (0);
}
