#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int _printf(const char *frmt, ...);
int _putchar(char c);
int _putstr(char *str);
int (*check_p(const char *))(va_list);

/**
 * struct fun - the struct for the specifier to the pointer.
 * @cm: charcter to be compared
 * @f: function handling to the specific printing type.
 */
typedef struct fun
{
	char *cm;
	int (*f)(va_list);
} tito;

int print_char(va_list);
int print_str(va_list);
int print_module(va_list);
int prt_int(va_list);
int prt_dec(va_list);

#endif
