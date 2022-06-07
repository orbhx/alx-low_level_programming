#include "main.h"

/**
 * main -  a program that prints _putchar followed by a new line
 *
 * Return: 0
 */
int main(void)
{
	char str[] = "_putchar\n";
	int i = 0;

	while (str[i] != '\0')
		_putchar(str[i++]);
	return (0)
}
