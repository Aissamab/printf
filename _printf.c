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
		if (*format != '%')/*if format is not % sign*/
		{
			_putchar(*format);
			i++;
		}
		else
		{
			format++;/*check the next character*/

			if (*format == '\0')
				break;

			if (*format == 'c')/* handle '%c' char */
			{
				char c = va_arg(list, int);

				_putchar(c);
				i++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(list, char *);

				i += print_string(str);
			}
			else if (*format == '%')/*for % */
			{
				_putchar('%');
				i++;
			}
			else if (*format == 'd' || *format == 'i')
			{
				int num = va_arg(list, int);

				i += print_int(num);
			}
			else if (*format == 'b')
			{
				int nbr = va_arg(list, int);

				i += print_bin(nbr);

			}
		}
		format++;
	}
	va_end(list);
	return (i);
}
