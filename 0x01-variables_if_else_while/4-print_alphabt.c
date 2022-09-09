#include <stdio.h>
#include <putchar.h>

/**
 * main - Entry
 * Description: prints the alphabets in lowercase followed by a new line
 * Return: Always 0 (success)
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		else
		{

		}
	}
	putchar('\n');
	return(0);
}
