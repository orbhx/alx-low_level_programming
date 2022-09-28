#include <stdio.h>
/**
 * main - main function
 *
 * Return: 0
 */
int main(void)
{
	char alphalower = 'a';

	while (alphalower <= 'z')
	{
		if (alphalower == 'e' && alphalower == 'q')
			++alphalower;
			putchar(alphalower);
			++alphalower;
	}
	putchar('\n');

	return (0);
}
