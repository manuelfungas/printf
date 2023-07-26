#include <stdarg.h>
#include <stdio.h>

void printString(const char* str) {
    while (*str) {
        putchar(*str);
        str++;
    }
}

int myPrintf(const char* format, ...) {
    va_list args;
    va_start(args, format);

    int count = 0;

    while (*format) {
        if (*format == '%') {
            format++; // Move to the next character after '%'

            // Handle the specifier
            switch (*format) {
                case 's': {
                    const char* str_arg = va_arg(args, const char*);
                    printString(str_arg);
                    count += strlen(str_arg);
                    break;
                }
                default:
                    putchar(*format);
                    count++;
                    break;
            }
        } else {
            putchar(*format);
            count++;
        }

        format++; // Move to the next character in the format string
    }

    va_end(args);
    return count;
}

int main() {
    const char* message = "Hello, World!";
    myPrintf("Print this string: %s\n", message);
    return 0;
}

