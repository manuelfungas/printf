# Custom printf Function (_printf)

## Description
`_printf` is a custom implementation of the standard C library function `printf`. This project aims to replicate the functionality of `printf` while excluding the use of the standard I/O library (`stdio.h`). 

## Features
- Supports a wide range of format specifiers, including `%c`, `%s`, `%d`, `%i`, `%u`, `%o`, `%x`, `%X`, `%f`, `%p`, `%n`, `%a`, and `%m`.
- Allows for variable-length argument lists using the ellipsis (`...`) syntax.
- Emulates the behavior of `printf` in terms of formatting output to the console.

## Usage
1. Include the `main.h` header file in your C source code.
2. Call the `_printf` function with the desired format string and optional arguments.
3. Compile your code, ensuring to link with the `main` library.

```c
#include "main.h"

int main() {
    _printf("Hello, %s!\n", "world");
    _printf("The value of pi is approximately %.2f\n", 3.14159);
    return 0;
}
```

## Supported Format Specifiers
- `%c`: Character
- `%s`: String
- `%d`, `%i`: Signed integer
- `%u`: Unsigned integer
- `%o`: Octal
- `%x`, `%X`: Hexadecimal
- `%f`: Floating point
- `%p`: Pointer
- `%n`: Store number of characters written so far
- `%a`: Hexadecimal floating point
- `%m`: System-specific error message

## Development
The `_printf` function is implemented in `_printf.c`, with supporting functions and utilities in other source files. The project is organized into modules to maintain readability and ease of maintenance.

## Testing
Comprehensive testing is conducted to ensure the functionality and correctness of `_printf`. This includes unit tests for individual components as well as integration tests to validate the behavior of the function as a whole.

## Credits


## License
