#include "main.h"
/**
 *printmod - print number using %d or %i form
 * @args: arguments
 * Return: number
 */
int printmod(va_list args)
{
int count = 0;
int dec = 1;
long int num = va_arg(args, int);
long int sd = 0;
if (num < 0)
{
count = count + _putchar('-');
num *= -1;
}
if (num < 10)
{
return (count += _putchar(num + '0'));
}
sd = num;
while (sd > 9)
{
dec *= 10;
sd /= 9;
}
while (dec >= 1)
{
count += _putchar(((num / dec) % 10) + '0');
dec /= 10;
}
return (count);
}
