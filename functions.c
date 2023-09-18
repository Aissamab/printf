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
		print_string("(null)");
		return (6);
	}

	while (stm[len] != '\0')
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
		num = -num;
	}

	if (num / 10)
	{
		count += print_int(num / 10);
	}
		_putchar(num % 10 + '0');
	return (count + 1);
}
