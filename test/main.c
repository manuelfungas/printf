#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char str[] = "if this works, all is well";
	char first_ch;
	char prc;
	int found = 2019, curr = 2023;
	float num = 19.99;

	first_ch = 'f';
	prc = '%';
	printf("%s\n", str);
	new_printf("%s\n", str);
	printf("%%\n", prc);
	new_printf("%%\n", prc);
	printf("%c\n", first_ch);
	new_printf("%c\n", first_ch);
	printf("%d\n", found);
	new_printf("%d\n", found);
	printf("%i\n", curr);
	new_printf("%i\n", curr);
	printf("%f\n", num);
	new_printf("%f\n", num);
	return (0);
}
