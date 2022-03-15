#include <main.h>
/**
 * main - entry point
 * Description: printing puchar
 * return: always 0
 */
int main (void)
{
	char c[8] = "_putchar";

	int i = 0;

	while (i < 9)
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
