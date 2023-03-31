#include "main.h"

/**
 * print_rev - reverse print strings
 * @s: string to be reversed printed
 * Return: always 0
 */

void print_rev(char *s)
{
	/*first step is to count the number of strings*/
	int j;
	int count = 0;

	for (j = 0; s[j] != '\0'; j++) /* counts string xters*/
		count++;
	for (j = count; j >= 0; j--) /*using the count from above*/
		_putchar(s[j]); /* to reverse print the string*/
	_putchar('\n');
}
