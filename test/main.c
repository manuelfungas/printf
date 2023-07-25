#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{


	char str[] = "This Is Crazy!";
	printf("%s\n", str);
	new_printf("%s\n", str);

	char first_ch = 'f';
	printf("%c\n", first_ch);
	new_printf("%c\n", first_ch);
	return (0);
}
