#include <stdio.h>
#include <stdlib.h>

/**
 * main - return a combination of number
 * Return: return 0 if successful
 */

int main(void)
{
	int i, o;
	for (i = 0; i < 100; i++)
	{
		for (o = 0; o < 100; o++)
		{
			if (i < o)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((o / 10) + 48);
				putchar((o % 10) + 48);
				if (i != 98 || o != 99)
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
