#include <stdio.h>
/**
 * jack_bauer - Prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
 *
 * Return: Always 0
 */
void jack_bauer(void)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			for (int k = 0; k < 6; k++)
			{
				for (int l = 0; l < 10; l++)
				{
					if (((i + j)  > 5))
					{
						break;
					}
					putchar(i + 48);
					putchar(j + 48);
					putchar(58);
					putchar(k + 48);
					putchar(l + 48);
					putchar('\n');
				}
			}
		}
   }
}