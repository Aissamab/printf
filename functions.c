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

	while (stm[len])
	{
		_putchar(stm[len]);
		len++;
	}

	return (len);
}
