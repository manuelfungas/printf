#include "main.h"

int main()
{
    int num = 42;
    char letter = 'A';
    char name[] = "John";

    int result = new_printf("Number: %d, Letter: %c, Name: %s", num, letter, name);

    return 0;
}

