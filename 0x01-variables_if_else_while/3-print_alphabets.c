#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphalower = 'a';
	char alphaupper = 'A';

	while (alphalower <= 'z');
	       {
		       putchar (alphalower);
			++alphalower;
	       }
	while (alphaupper <= 'Z');
	       {
		       putchar (alphaupper);
			++alphaupper;
	       }
	putchar('\n');

	return (0);
}
