#include <stdio.h>
/**
 * main - program that prints all possible different combinations of two digits
 * Numbers must be separated by ,, followed by a space
 * Return: 0 (success)
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar('0' + i);

			putchar('0' + j);

			if (i != 8 || j != 9)
			{
				putchar(',');

				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
