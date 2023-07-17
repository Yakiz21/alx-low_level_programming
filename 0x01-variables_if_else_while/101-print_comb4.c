#include <stdio.h>
/**
 * main - prints all possible different combination of this digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ones = '0';
	for (ones = '0'; ones <= '9'; ones++)
	{
		int tens = '0';
		for (tens = '0'; <= '9'; tens++)
		{
			if (!((ones == tens) || (tens > ones)))
			{
				putchar(tens);
				putchar(ones);
				if (!(ones == '9' && tens == '8'))
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


