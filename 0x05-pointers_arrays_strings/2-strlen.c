#include "main.h"
/**
 * _strlen - counts number of strings
 * @s: string to count
 * Return: int (count)
 */

int _strlen(char *s)
{
	int i;
	int count;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
