#include "main.h"
/**
 * _printf - function that print any format
 * @format: format argument %.
 * Return: number of charcter
 */
int _printf(const char *format, ...)
{
va_list arguments;
int count = 0;
va_start(arguments, format);
count = SelectFunc(format, arguments);
va_end(arguments);
return (count);
}
