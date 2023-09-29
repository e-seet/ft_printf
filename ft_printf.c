// %c Prints a single character.
// • %s Prints a string (as defined by the common C convention).
// • %p The void * pointer argument has to be printed in hexadecimal format.
// • %d Prints a decimal (base 10) number.
// • %i Prints an integer in base 10.
// • %u Prints an unsigned decimal (base 10) number.
// • %x Prints a number in hexadecimal (base 16) lowercase format.
// • %X Prints a number in hexadecimal (base 16) uppercase format.
// • %% Prints a percent sign

int    ft_printf(const char *str, ...);


//example
#include <stdio.h>
#include <stdarg.h>

// va_copy:
// Function: va_copy(dest, src)
// Purpose: Copies the va_list object src to dest.
// Parameters:
// dest: The destination va_list.
// src: The source va_list to be copied.
// Usage: va_copy is used when you need to create a copy of a va_list
// so that you can iterate through the arguments independently without affecting the original list.

void print_args(int count, ...) {
	// A variable argument list.
    va_list args;
    // Initializes a va_list to point to the first variable argument in the function.
	va_start(args, count);

    for (int i = 0; i < count; i++) {
        //  Retrieves the next argument from the variable argument list.
		int value = va_arg(args, int);
        printf("Argument %d: %d\n", i + 1, value);
    }


	// Purpose: Cleans up the va_list object when you're done using it.
	// Parameters:
	// ap: The va_list to be cleaned up.
	// Usage: You should call va_end when you're finished processing variable
	// arguments to release any resources associated with the va_list.
    va_end(args);
}

int main() {
    print_args(3, 10, 20, 30);
    return 0;
}
