#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        char *name = "abakkar";

	_printf("Aissam %s", name);
	_putchar('\n');
	_printf("Aissam abakka%c", 'r');
	_putchar('\n');
	_printf("this is %%");
	_putchar('\n');
	_printf("%d", 24);/* by youssef */
	_putchar('\n');
	_printf("%i", -200);
	_putchar('\n');
	return (0);
}
