#include <stdio.h>

/**
 * main - prints all possible combinations of three digits
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ones;
	int twos;
	int threes;

	for (ones = 47; ones <= 56; ones++)
	{
		for (threes = ones + 1; threes <= 56; threes++)
		{
			for (twos = threes +1; twos <= 56; twos++)

			{
				putchar(ones);
				putchar (threes);
				putchar (twos);

				if ((ones == 54) && (threes == ones +1) && (twos == threes +1))
				{
					break;
					putchar(',');
					putchar(' ');

				}
			}
		}

		putchar('\n');
		return (0);

	}
}
