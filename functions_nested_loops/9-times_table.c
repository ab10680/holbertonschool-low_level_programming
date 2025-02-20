#include "main.h"

/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
int i, j, product;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
product = i * j;
if (j > 0)
{
_putchar(','); /* Print comma before the number if it's not the first column */
_putchar(' '); /* Print space after the comma */
}
if (product < 10)
{
_putchar(' '); /* Print space for single-digit products */
}
_putchar(product + '0'); /* Print the product */
}
_putchar('\n'); /* New line after each row */
}
}
