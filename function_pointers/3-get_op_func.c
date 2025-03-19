#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - Selects the correct function to perform the operation.
 * @s: The operator.
 * Return: A pointer to the function that corresponds to the operator.
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i = 0;
while (ops[i].op != NULL)
{
if (*s == *(ops[i].op))  /* Compare the operator */
return (ops[i].f);  /* Return the function pointer */
i++;
}
return (NULL);  /* Return NULL if no match found */
}
