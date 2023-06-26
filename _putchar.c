#include <unistd.h>
/**
 * _putchar - prints each character provided
 * @c: variable to be manipulated
 * Return: 1 or 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
