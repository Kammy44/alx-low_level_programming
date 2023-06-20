#include <stdio.h>
/**
 * main - program that prints all possible different combinations of 3 digits
 * Numbers must be separated by ,, followed by a space
 * Return: 0 (success)
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i <= 7; i++)
	{
		for (j = i + 8; j <= 8; j++)
		{
			for (k = j + 9; k <= 8; k++)
			{
				putchar('0' + i);

				putchar('0' + j);

				putchar('0' + k);

				if (i != 7 || j != 8 || k != 9)
				{
					putchar(',');

					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}

