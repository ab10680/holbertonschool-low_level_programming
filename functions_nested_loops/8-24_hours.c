#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 */
void jack_bauer(void)
{
int hour;
int minute;
for (hour = 0; hour < 24; hour++)
{
for (minute = 0; minute < 60; minute++)
{
_putchar((hour / 10) + '0'); /* Print the tens digit of the hour */
_putchar((hour % 10) + '0'); /* Print the units digit of the hour */
_putchar(':');                /* Print the colon */
_putchar((minute / 10) + '0'); /* Print the tens digit of the minute */
_putchar((minute % 10) + '0'); /* Print the units digit of the minute */
_putchar('\n');               /* New line after each minute */
}
}
}
