#include <stdio.h>
/**
 * jack_bauer - Prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
 *
 * Return: Always 0
 */
void jack_bauer(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 6; k++)
			{
				for (l = 0; l < 10; l++)
				{
					putchar(i + 48);
					putchar(j + 48);
					putchar(58);
					putchar(k + 48);
					putchar(l + 48);
					putchar('\n');
				}
			}
		}
		if (i == 2 && j == 3 && k == 5 && l == 9)
		{
			break;
		}
       	}
}
