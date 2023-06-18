#include <stdio.h>
/**
 * main - program that prints the letters in lower case, folowed by a new line
 * prints all letters except q and e
 * Return: 0 (success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	if (letter != 'q' && letter != 'e')
	{
	putchar(letter);

	}

	putchar('\n');

	return (0);
}	
