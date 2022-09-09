#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: Program that prints the alphabets in lowercase with a new line
 * Return: Always 0 (success)
 */

int main(void)
{
	int ch;
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
