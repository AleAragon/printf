#include "main.h"

/**
 * run_printf - Reads through the format string for _printf.
 * @format: Character string to print - may contain directives.
 * @args: A va_list of arguments.
 * Return: The number of characters stored to output.
 */
int run_printf(const char *format, va_list args)
{
	int state = 0;
	int ret;

	while (*format)
	{
		if (state == 0)
		{
			if (*format == '%')
				state = 1;
			else
			{
				ret = _putchar(*format);
				return (ret);
			}
		}
		else if (state == 1)
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

			state = 0;
		}

		format++;
}
