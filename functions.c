#include "main.h"
/**
* print_string - printd a string
* @stm: string
* Return: Number of char
*/
int print_string(char *stm)
{
	int len = 0;

	if (stm == NULL)
	{
		_putchar('(');
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');
		len += 6;
		return (len);
	}

	while (stm[len])
	{
		_putchar(stm[len]);
		len++;
	}

	return (len);
}

/* by youssef */
/**
* print_int - prints an integer
* @num: The integer to print
* Return: Number of characters printed
*/
int print_int(int num)
{
	int count = 0;

	if (num < 0)
	{
		_putchar('-');
		count++;
		num = -num;
	}

	if (num / 10)
	{
		count += print_int(num / 10);
	}
		_putchar(num % 10 + '0');
		count++;
	return (count);
}
