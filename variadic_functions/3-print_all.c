#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_char - Prints a character.
 * @separator: The string to be printed before the character.
 * @args: The argument list.
 */
void print_char(char *separator, va_list args)
{
printf("%s%c", separator, va_arg(args, int)); /* char is promoted to int */
}

/**
 * print_int - Prints an integer.
 * @separator: The string to be printed before the integer.
 * @args: The argument list.
 */
void print_int(char *separator, va_list args)
{
printf("%s%d", separator, va_arg(args, int));
}

/**
 * print_float - Prints a float.
 * @separator: The string to be printed before the float.
 * @args: The argument list.
 */
void print_float(char *separator, va_list args)
{
printf("%s%f", separator, va_arg(args, double));
/* float is promoted to double */
}

/**
 * print_string - Prints a string.
 * @separator: The string to be printed before the string.
 * @args: The argument list.
 */
void print_string(char *separator, va_list args)
{
char *str = va_arg(args, char *);
if (str == NULL)
str = "(nil)";
printf("%s%s", separator, str);
}

/**
 * print_all - Prints anything based on the format provided.
 * @format: A list of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0;
char *separator = "";
/* Initialize the argument list */
va_start(args, format);
/* Loop through the format string */
while (format && format[i])
{
switch (format[i])
{
case 'c':
print_char(separator, args);
break;
case 'i':
print_int(separator, args);
break;
case 'f':
print_float(separator, args);
break;
case 's':
print_string(separator, args);
break;
default:
i++;
continue;
}
separator = ", "; /* Set separator after the first print */
i++;
}
/* Clean up the argument list */
va_end(args);
/* Print a new line */
printf("\n");
}
