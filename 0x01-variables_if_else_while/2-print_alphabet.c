#include <stdio.h>
/**
 * main 
 * Description: Use putchar function to print the alphabet in lowercase.
 * Return: 0
 */
int main(void)
{
	char alphabets = 'a';

	while (alphabets <= 'z')
	{
		putchar(alphabets);
		++alphabets;
	}
		putchar('\n');

	return (0);
}
