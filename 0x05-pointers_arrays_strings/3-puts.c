#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: ztring to print
 */
void _pots(char *str)
{
	while (str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}