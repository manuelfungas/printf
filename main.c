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
	_printf("%s\n", str);
	printf("%%\n", prc);
	_printf("%%\n", prc);
	printf("%c\n", first_ch);
	_printf("%c\n", first_ch);
	printf("%d\n", found);
	_printf("%d\n", found);
	printf("%i\n", curr);
	_printf("%i\n", curr);
	printf("%f\n", num);
	_printf("%f\n", num);
	return (0);
}
