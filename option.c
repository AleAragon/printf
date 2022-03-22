#include "main.h"
/**
 * option - Evaluates the format string for _printf.
 * @format: Character string to print - may contain directives.
 * @args: A va_list of arguments.
 * Return: The number of characters stored to output.
 */

int option(const char *format, va_list args)
{
	switch (*format)
			{
			case 'c':{
				int ret;
				char ch = va_arg(args, int);

				ret = _putchar(ch);
				return (ch);

				break;
			}
			case 's':
				break;
			case 'd':
				break;
			case 'i':
				break;
			case '%':
				break;
			default:
				break;
			}
}
