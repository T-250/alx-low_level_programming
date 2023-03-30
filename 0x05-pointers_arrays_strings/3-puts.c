#include "main.h"
/**
 * _puts - prints characters
 * @str: variable holding string
 * Return: Always 0
 */

void _puts(char *str)
{
	int j;

	for (j = 0; str[j] != '\0'; j++)
		_putchar(str[i]);
	_putchar('\n');
}
