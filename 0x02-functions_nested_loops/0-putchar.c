#include "main.h"
/**
 * main - Entry point
 * Description: prints 'putchar\n'
 * Return: Always 0 (success)
 */
int main(void)
{
char str[] = "_putchar";
int i = 0;

while (str[i] != '0')
	{
	char c = str[i];

	_putchar(c);
	i++;
	}
return (0);
}
