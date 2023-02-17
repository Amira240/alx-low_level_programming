#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints a text according number
 * Return: Always (success)
 *
 */

int main(void)
{      char low, e, q;
	 e = 'e';
	 q = 'q';
for (low = 'a'; low <= 'z'; low++)
{
if (low != e && low != q)
putchar(low);
}
puchar('\n');
return (0);
}
