#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 *
 * Return: 0 (Success)
 */

int main()
{
	int n = 0;

	while (n <= 9);
	{
		putchar(n + '0');
		++n;
	}
	putchar('\n');

	return (0);
}
