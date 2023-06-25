#include "main.h"
/**
 * check_p- checks that the the specifier passed is a valid one,
 * and the run the specific function.
 * @frmt: the specifier .
 * Return: If it's not a null it returns a pointer to the function.
 */
int (*check_p(const char *frmt))(va_list)
{
tito array[] = {
{"c", print_char},
{"s", print_str}, 
{"%", print_module}, 
{NULL, NULL}};
int i;
for (i = 0; array[i].cm != NULL; i++)
{
if (*(array[i].cm) == *frmt)
{
return (array[i].f);
}
}
return (NULL);
}
