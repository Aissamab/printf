#include "main.h"

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
			_putchar(*format);
			i++;
		}
		else
		{
			format++;

			if (*format == '\0')
				break;

			if (*format == 'c')
			{
				char c = (char)va_arg(list, int);

				_putchar(c);
				i++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(list, char *);

				i += print_string(str);
			}
			else if (*format == '%')
			{
				_putchar('%');
				i++;
			}
			else if (*format == 'd' || *format == 'i')
			{
				int num = va_arg(list, int);

				i += print_int(num);
			}
		}
		format++;
	}
	va_end(list);
	return (i);
}
