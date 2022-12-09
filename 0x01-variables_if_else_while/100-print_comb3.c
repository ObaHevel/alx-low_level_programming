#include <stdio.h>

/**
 * main - prints all possible diferent combinations of two digits
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)

{
	int ones = '0';
	int tens = '0';

	for (tens = '0'; tens <= '9'; tens++)/* prints tens*/
	{
		for (ones = '0'; ones <= '9'; ones++)/* prints ones*/
		{
			if (!((ones == tens) || tens > ones))/*stops repitition*/
			{
				putchar(tens);
				putchar(ones);
				if (!(ones == '9' && tens == '8'))/*adds coma and space*/
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
