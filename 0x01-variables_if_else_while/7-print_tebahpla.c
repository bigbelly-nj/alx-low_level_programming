#include <stdio.h>
#include <unistd.h>

/**
 * main -Entry point
 * Description: prints lowercase alphabets in reverse
 * Return: Always 0 (success)
 */

int main(void)
{
	int a;

	for (a = 'z'; a >= 'a'; a--)
	{
		puchar(a);
	}
	puchar('\n');
	return (0);
}
