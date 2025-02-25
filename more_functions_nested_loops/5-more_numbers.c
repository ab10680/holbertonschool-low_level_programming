#include <unistd.h>
#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 */
void more_numbers(void)
{
int i, j;
for (i = 0; i < 10; i++) /* Loop 10 times */
{
for (j = 0; j <= 14; j++) /* Loop from 0 to 14 */
{
if (j > 9) /* If j is 10 or more, print the tens digit */
{
_putchar('1');
}
_putchar((j % 10) + '0'); /* Print the unit digit */
}
_putchar('\n'); /* Print a new line after each row */
}
}
