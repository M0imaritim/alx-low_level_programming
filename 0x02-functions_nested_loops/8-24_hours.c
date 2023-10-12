#include "main.h"
/**
 * jack_bauer -prints every minute of the day
 *
 * Return: void (no return value)
 */
void jack_bauer(void)
{
	int hour;
	int minute;

	for (hour = 00; hour < 24; hour++)
	{
		for (minute = 00; minute < 60; minute++)
		{
			_putchar('0' + (hour / 10));
			_putchar('0' + (hour % 10));
			_putchar(':');
			_putchar('0' + (minute/10));
			_putchar('0' + (minute % 10));
			_putchar('\n');
		}
	}
}
