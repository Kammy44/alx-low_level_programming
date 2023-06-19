#include <stdio.h>
/**
 * main - program that prints all possible combinations of single-digit numbers
 * Numbers must be separated by , followed by a space
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);

		if (i != 9)
		{
		putchar(',');

		putchar(' ');
		}
	}

	putchar('\n');

	return (0);

}
