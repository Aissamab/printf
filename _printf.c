#include "main.h"

int _printf(const char *format, ...);

/**
* _printf - Printf function
* @format: format.
* Return: Printed chars.
*/

int _printf(const char *format, ...)
{
	int i = 0;

	va_list list;

	if (format == NULL)
		return (-1);
	va_start(list, format);

	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
				i++;
		}
		else
		{
			format++;
			if (*format == '\0')
				break;
			if (*format == 'c')
				i += _putchar(va_arg(list, int));
			else if (*format == 's')
				i += print_string(va_arg(list, char*));
			else if (*format == 'd' || *format == 'i')/* by youssef */
				i += print_int(va_arg(list, int));
			else
			{
				/*Print the unknown specifier*/
				write(1, format - 1, 2);
				i += 2;
			}
		}
		format++;
	}
	va_end(list);
	return (i);
}
