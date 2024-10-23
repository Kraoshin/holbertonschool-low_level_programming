#include "main.h"

/**
 * jack_bauer - function that display every min in an hour for each hour
 */

void jack_bauer(void)
{
	int m;
	int h; /* 1 de 0 a 59 l'autre de 0 a 23*/
	m = 48;
	h = 48;

	while (dh < 51  && h < 52  && dm < 54  && m < 58 )
	{

		for (m = 48; m < 58; m++)
		{
			_putchar(dh);
			_putchar(h);
			_putchar(58);
			_putchar(dm);
			_putchar(m);
			_putchar('\n');

			/*if (h == 51 && dh == 50 && dm == 53 && m == 57)
			{
				break;
			}*/

			if (m == 58)
			{
				dm++;
				m = 48;
			/*	if (h == 51 && dh == 50)
				{
					continue;
				}*/
				if (dm == 53)
				{
					h++;
					dm = 48;

					if (h == 51)
					{
						dh++;
						h = 0;
					}
				}
			}
		}
	}
}
