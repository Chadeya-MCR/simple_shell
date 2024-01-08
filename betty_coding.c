#include <stdio.h>
#include "main.h"
/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char betty[] = "Betty Holberton";
	int i;

		for (i = 0; i < 14; i++)
		{
			putchar(betty[i]);
		}

			putchar('\n');

return (0);
}

