#include "main.h"
/**
 * stringp - function that print a string %s
 * @list: list arguments
 * Return: count of char
 */
int stringp(va_list list)
{
int count = 0;
char *str = va_arg(list, char*);
if (str == NULL)
{
str = "(null)";
}
while (*str)
{
_putchar(*str);
str++;
count++;
}
return (count);
}
