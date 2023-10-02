// #include <stdio.h>
// #include <stdarg.h>
// #include "libft/libft.h"
#include <stdio.h>
#include <limits.h> // for LONG_MIN, LONG_MAX, INT_MIN, INT_MAX, ULONG_MAX
#include "ft_printf.h"
#include <unistd.h> // for write

// %c Prints a single character.
// • %s Prints a string (as defined by the common C convention).
// • %p The void * pointer argument has to be printed in hexadecimal format.
// • %d Prints a decimal (base 10) number.
// • %i Prints an integer in base 10.
// • %u Prints an unsigned decimal (base 10) number.
// • %x Prints a number in hexadecimal (base 16) lowercase format.
// • %X Prints a number in hexadecimal (base 16) uppercase format.
// • %% Prints a percent sign

// how it works:
// When calling the function
// ft_printf("this item costs %d dollars and that is %d", 10, 50);
// it wil ltake it string and (10, 15) in ...
void	ft_putchar(int c)
{
	write(1, &c, 1);
}


int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;

	va_start(args, str);
	i = 0;
	while (str[i] != '\0')
	{
		// printf("i value: %d", i);
		// printf("str[i] value: %c", str[i]);
		// printf("str[i + 1] value: %c\n\n", str[i+ 1]);
		if (str[i] == '%')
		{
			if (str[i + 1] == 'c')
				ft_putchar(va_arg(args, int));
			// else if (str[i + 1] == 's')
			// 	ft_putstr(va_arg(args, char *));
			// else if (str[i + 1] == 'p')
			// 	ft_putptr(va_arg(args, void *));
			// else if (str[i + 1] == 'd' || str[i + 1] == 'i')
			// 	ft_putnbr_fd(va_arg(args, int));
			// else if (str[i + 1] == 'u')
			// 	ft_putunbr(va_arg(args, unsigned int));
			// else if (str[i + 1] == 'x')
			// 	ft_puthex(va_arg(args, unsigned int));
			// else if (str[i + 1] == 'X')
			// 	ft_puthexup(va_arg(args, unsigned int));
			else if (str[i + 1] == '%')
				ft_putchar('%');
			i = i + 2;
		}
		else
		{
			write(1, &str[i], 1);
			i++;
		}
	}
	return (0);
}

/* 
//printfTester
int main(void)
{
	ft_printf("mine:%c", '0');
    printf("\nprintf:%c\n", '0');
 	
    ft_printf("mine: %c", '0' + 256);
    printf("\nprintf: %c\n", '0' + 256);

    ft_printf("mine: %c %c %c ", '0', 0, '1');
    printf("\nprintf: %c %c %c\n", '0', 0, '1');

    ft_printf("mine: %c %c %c ", ' ', ' ', ' ');
    printf("\nprintf: %c %c %c\n", ' ', ' ', ' ');

    ft_printf("mine: %c %c %c ", '1', '2', '3');
    printf("\nprintf: %c %c %c\n", '1', '2', '3');

    ft_printf("mine: %c %c %c ", '2', '1', 0);
    printf("\nprintf: %c %c %c\n", '2', '1', 0);

    ft_printf("mine: %c %c %c ", 0, '1', '2');
    printf("\nprintf: %c %c %c\n", 0, '1', '2');


//  ft_printf("mine: %s", "");
//     printf("printf: %s\n", "");

//     ft_printf("mine: %s", "");
//     printf("printf: %s\n", "");

//     ft_printf("mine: %s", "");
//     printf("printf: %s\n", "");

//     ft_printf("mine: %s", "-");
//     printf("printf: %s\n", "-");

//     ft_printf("mine: %s %s", "", "-");
//     printf("printf: %s %s\n", "", "-");

//     ft_printf("mine: %s %s", " - ", "");
//     printf("printf: %s %s\n", " - ", "");

//     ft_printf("mine: %s %s %s %s %s", " - ", "", "4", "", s2);
//     printf("printf: %s %s %s %s %s\n", " - ", "", "4", "", s2);

//     ft_printf("mine: %s %s %s %s %s", " - ", "", "4", "", "2 ");
//     printf("printf: %s %s %s %s %s\n", " - ", "", "4", "", "2 ");

//     ft_printf("mine: NULL %s NULL", NULL);
//     printf("printf: NULL %s NULL\n", NULL);

// ft_printf("mine: %p ", (void *)-1);
//     printf("printf: %p\n", (void *)-1);

//     ft_printf("mine: %p ", (void *)1);
//     printf("printf: %p\n", (void *)1);

//     ft_printf("mine: %p ", (void *)15);
//     printf("printf: %p\n", (void *)15);

//     ft_printf("mine: %p ", (void *)16);
//     printf("printf: %p\n", (void *)16);

//     ft_printf("mine: %p ", (void *)17);
//     printf("printf: %p\n", (void *)17);

//     ft_printf("mine: %p %p ", (void *)LONG_MIN, (void *)LONG_MAX);
//     printf("printf: %p %p\n", (void *)LONG_MIN, (void *)LONG_MAX);

//     ft_printf("mine: %p %p ", (void *)INT_MIN, (void *)INT_MAX);
//     printf("printf: %p %p\n", (void *)INT_MIN, (void *)INT_MAX);

//     ft_printf("mine: %p %p ", (void *)ULONG_MAX, (void *)-ULONG_MAX);
//     printf("printf: %p %p\n", (void *)ULONG_MAX, (void *)-ULONG_MAX);

//     ft_printf("mine: %p %p ", (void *)0, (void *)0);
//     printf("printf: %p %p\n", (void *)0, (void *)0);	

    // ft_printf("mine: %d ", 0);
    // printf("printf: %d\n", 0);

    // ft_printf("mine: %d ", -1);
    // printf("printf: %d\n", -1);

    // ft_printf("mine: %d ", 1);
    // printf("printf: %d\n", 1);

    // ft_printf("mine: %d ", 9);
    // printf("printf: %d\n", 9);

    // ft_printf("mine: %d ", 10);
    // printf("printf: %d\n", 10);

    // ft_printf("mine: %d ", 11);
    // printf("printf: %d\n", 11);

    // ft_printf("mine: %d ", 15);
    // printf("printf: %d\n", 15);

    // ft_printf("mine: %d ", 16);
    // printf("printf: %d\n", 16);

    // ft_printf("mine: %d ", 17);
    // printf("printf: %d\n", 17);

    // ft_printf("mine: %d ", 99);
    // printf("printf: %d\n", 99);

    // ft_printf("mine: %d ", 100);
    // printf("printf: %d\n", 100);

    // ft_printf("mine: %d ", 101);
    // printf("printf: %d\n", 101);

    // ft_printf("mine: %d ", -9);
    // printf("printf: %d\n", -9);

    // ft_printf("mine: %d ", -10);
    // printf("printf: %d\n", -10);

    // ft_printf("mine: %d ", -11);
    // printf("printf: %d\n", -11);

    // ft_printf("mine: %d ", -14);
    // printf("printf: %d\n", -14);

    // ft_printf("mine: %d ", -15);
    // printf("printf: %d\n", -15);

    // ft_printf("mine: %d ", -16);
    // printf("printf: %d\n", -16);

    // ft_printf("mine: %d ", -99);
    // printf("printf: %d\n", -99);

    // ft_printf("mine: %d ", -100);
    // printf("printf: %d\n", -100);

    // ft_printf("mine: %d ", -101);
    // printf("printf: %d\n", -101);

    // ft_printf("mine: %d ", INT_MAX);
    // printf("printf: %d\n", INT_MAX);

    // ft_printf("mine: %d ", INT_MIN);
    // printf("printf: %d\n", INT_MIN);

    // ft_printf("mine: %ld ", LONG_MAX);
    // printf("printf: %ld\n", LONG_MAX);

    // ft_printf("mine: %ld ", LONG_MIN);
    // printf("printf: %ld\n", LONG_MIN);

    // ft_printf("mine: %u ", UINT_MAX);
    // printf("printf: %u\n", UINT_MAX);

    // ft_printf("mine: %lu ", ULONG_MAX);
    // printf("printf: %lu\n", ULONG_MAX);

    // ft_printf("mine: %lld ", 9223372036854775807LL);
    // printf("printf: %lld\n", 9223372036854775807LL);

    // ft_printf("mine: %d %d %ld %ld %lu %d %d",
    //            INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
    // printf("printf: %d %d %ld %ld %lu %d %d\n",
    //        INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
    // return 0;
}



// */

/*fsoars*/
// int main(void)
// {
// 	// printf("\001\002\007\v\010\f\r\n");
// 	// ft_printf("\001\002\007\v\010\f\r\n");
	
// 	printf(" %%");
// 	printf("\n");
// 	ft_printf(" %%");
// }

// va_copy:
// Function: va_copy(dest, src)
// Purpose: Copies the va_list object src to dest.
// Parameters:
// dest: The destination va_list.
// src: The source va_list to be copied.
// Usage: va_copy is used when you need to create a copy of a va_list
// so that you can iterate through the arguments
// independently without affecting the original list.

// void print_strargs(char *s, ...)
// {
// 	va_list args;
//     va_start(args, s);

//     // char *str = s; // Start with the first string argument

//     while (s != NULL) {
// 		int i = 0;
// 		while (s[i] != '\0') {
// 			printf("%c", s[i]);
// 			i += 1;
// 		}
// 		printf("\n");
//         s = va_arg(args, char*); // Move to the next string argument
//     }

//     va_end(args);

// }

/* void print_strargs(char *s, ...)
{
	va_list args;
    va_start(args, s);

    // char *str = s;
	// Start with the first string argument

    while (s != NULL) {
		int i = 0;
		while (s[i] != '\0') {
			printf("%c", s[i]);
			i += 1;
		}
		printf("\n");
        s = va_arg(args, char*); 
		// Move to the next string argument
    }

    va_end(args);

}

void print_args(int count, ...) {
	// A variable argument list.
    va_list args;
    // Initializes a va_list to point to the first
	// variable argument in the function.
	va_start(args, count);

	int i = 0;
	printf("Printing original arguments:\n");
    while (i < count) {
        // Retrieves the next argument from the variable argument list.
        int value = va_arg(args, int);
        printf("Argument %d: %d\n", i + 1, value);
        i++;
    }
	printf("Printing arguments:\n");
	printf("Argument : %d\n", va_arg(args, int));

	// Purpose: Cleans up the va_list object when you're done using it.
	// Parameters:
	// ap: The va_list to be cleaned up.
	// Usage: You should call va_end when you're finished 
	//processing variable
	// arguments to release any resources associated with the va_list.
    va_end(args);
} */



/*int main() {
	// The first argument is the number of arguments that follow.
	// Afterwards are the ... arguments.
    // print_args(3, 10, 20, 30);
    // print_strargs("hello", "world");
    // print_strargs("hello", "world");
    
	char character = 'A';
    char* string = "Hello, World!";
    void* pointer = (void*)0x12345678;
    int decimalNumber = 42;
    unsigned int unsignedNumber = 12345;
    int hexNumber = 0xABCD;

	// %c Prints a single character.
	printf("Character: %c\n", character);
	ft_printf("Character: %c\n\n", character);

	// %s Prints a string.
	printf("Character: %s\n", string);
	ft_printf("String: %s\n\n", string);

	// %p Prints a pointer in hexadecimal format.
	printf("Pointer: %p\n", pointer);
	ft_printf("Pointer: %p\n\n", pointer);

	printf("original number: %d\n", decimalNumber);
	// %d Prints a decimal number.
	ft_printf("Decimal: %d\n", decimalNumber);
	// %i Prints an integer in base 10.
	ft_printf("Integer: %i\n", decimalNumber);

	// %u Prints an unsigned decimal number.
	printf("unsigned number: %u\n", unsignedNumber);
	ft_printf("Unsigned: %u\n\n", unsignedNumber);

	// %x Prints a number in hexadecimal lowercase format.
	printf("Hexadecimal (lowercase): %x\n", hexNumber);
	ft_printf("Hexadecimal (lowercase): %x\n", hexNumber);

	// %X Prints a number in hexadecimal uppercase format.
	printf("Hexadecimal (uppercase): %X\n", hexNumber);
	ft_printf("Hexadecimal (uppercase): %X\n\n", hexNumber);

	// %% Prints a percent sign.
	printf("Percent sign: %%\n");
	ft_printf("Percent sign: %%\n");

	return 0;
}
*/