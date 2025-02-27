#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: The input string
 * Return: Pointer to the modified string
 */
char *leet(char *str)
{
char *ptr = str;
char letters[] = "aAeEoOtTlL"; /* Letters to be replaced */
char leet_nums[] = "4433007711"; /* 4= A/a, 3= E/e, 0= O/o, 7= T/t, 1= L/l */
int i;
while (*ptr) /* Outer loop to iterate over the string */
{
for (i = 0; letters[i]; i++)
{
if (*ptr == letters[i])
{
*ptr = leet_nums[i];
break; /* Exit the for loop if a replacement was made */
}
}
ptr++;
}
return (str);
}
