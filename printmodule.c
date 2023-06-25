#include "main.h"
/**
 * print_module - it prints the character % .
 * @args: the variadic parameter.
 * Return: the number of characters that have printed.
 */
int print_module(va_list args)
{
(void)args;
write(1, "%%", 1);
return (1);
}
