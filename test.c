#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
    int count;
    int test_var = 42;
    void *ptr = (void *)ULONG_MAX;
    
    // Character tests
    count = ft_printf("Character: %c\n", 'A');
    printf("ft_printf characters printed: %d\n", count);
    count = printf("Character: %c\n", 'A');
    printf("printf characters printed: %d\n\n", count);
    
    count = ft_printf("Non-printable char: %c\n", 7);
    printf("ft_printf characters printed: %d\n", count);
    count = printf("Non-printable char: %c\n", 7);
    printf("printf characters printed: %d\n\n", count);

    count = ft_printf("Max char: %c\n", CHAR_MAX);
    printf("ft_printf characters printed: %d\n", count);
    count = printf("Max char: %c\n", CHAR_MAX);
    printf("printf characters printed: %d\n\n", count);

	// String tests
    count = ft_printf("String: %s\n", "test string");
    printf("ft_printf characters printed: %d\n", count);
    count = printf("String: %s\n", "test string");
    printf("printf characters printed: %d\n\n", count);
    
    count = ft_printf("Empty string: %s\n", "");
    printf("ft_printf characters printed: %d\n", count);
    count = printf("Empty string: %s\n", "");
    printf("printf characters printed: %d\n\n", count);

    count = ft_printf("NULL string: %s\n", (char *)NULL);
    printf("ft_printf characters printed: %d\n", count);
    count = printf("NULL string: %s\n", (char *)NULL);
    printf("printf characters printed: %d\n\n", count);

    // Pointer tests
    count = ft_printf("Pointer: %p\n", (void *)&test_var);
    printf("ft_printf characters printed: %d\n", count);
    count = printf("Pointer: %p\n", (void *)&test_var);
    printf("printf characters printed: %d\n\n", count);
    
    count = ft_printf("Max pointer: %p\n", ptr);
    printf("ft_printf characters printed: %d\n", count);
    count = printf("Max pointer: %p\n", ptr);
    printf("printf characters printed: %d\n\n", count);
    
    count = ft_printf("NULL Pointer: %p\n", NULL);
    printf("ft_printf characters printed: %d\n", count);
    count = printf("NULL Pointer: %p\n", NULL);
    printf("printf characters printed: %d\n\n", count);

    // Integer tests
    count = ft_printf("Integer (d): %d\n", 12345);
    printf("ft_printf characters printed: %d\n", count);
    count = printf("Integer (d): %d\n", 12345);
    printf("printf characters printed: %d\n\n", count);

    count = ft_printf("Integer (i): %i\n", -67890);
    printf("ft_printf characters printed: %d\n", count);
    count = printf("Integer (i): %i\n", -67890);
    printf("printf characters printed: %d\n\n", count);

    count = ft_printf("Max int: %d\n", INT_MAX);
    printf("ft_printf characters printed: %d\n", count);
    count = printf("Max int: %d\n", INT_MAX);
    printf("printf characters printed: %d\n\n", count);

    count = ft_printf("Min int: %d\n", INT_MIN);
    printf("ft_printf characters printed: %d\n", count);
    count = printf("Min int: %d\n", INT_MIN);
    printf("printf characters printed: %d\n\n", count);

    // Unsigned integer tests
    count = ft_printf("Unsigned: %u\n", UINT_MAX);
    printf("ft_printf characters printed: %d\n", count);
    count = printf("Unsigned: %u\n", UINT_MAX);
    printf("printf characters printed: %d\n\n", count);

    count = ft_printf("Unsigned 0: %u\n", 0);
    printf("ft_printf characters printed: %d\n", count);
    count = printf("Unsigned 0: %u\n", 0);
    printf("printf characters printed: %d\n\n", count);

    // Hexadecimal tests
    count = ft_printf("Hexadecimal (lower): %x\n", 255);
    printf("ft_printf characters printed: %d\n", count);
    count = printf("Hexadecimal (lower): %x\n", 255);
    printf("printf characters printed: %d\n\n", count);

    count = ft_printf("Hexadecimal (upper): %X\n", 255);
    printf("ft_printf characters printed: %d\n", count);
    count = printf("Hexadecimal (upper): %X\n", 255);
    printf("printf characters printed: %d\n\n", count);

    count = ft_printf("Hex 0 (lower): %x\n", 0);
    printf("ft_printf characters printed: %d\n", count);
    count = printf("Hex 0 (lower): %x\n", 0);
    printf("printf characters printed: %d\n\n", count);

    count = ft_printf("Hex max (upper): %X\n", UINT_MAX);
    printf("ft_printf characters printed: %d\n", count);
    count = printf("Hex max (upper): %X\n", UINT_MAX);
    printf("printf characters printed: %d\n\n", count);

    // Mixed format test
    count = ft_printf("Mixed: %d %s %x %% %X\n", -42, "test", 255, 255);
    printf("ft_printf characters printed: %d\n", count);
    count = printf("Mixed: %d %s %x %% %X\n", -42, "test", 255, 255);
    printf("printf characters printed: %d\n\n", count);

	// Edge cases
    count = ft_printf("Edge cases: %d %u %x %p %s\n", INT_MIN, UINT_MAX, 0, NULL, (char *)NULL);
    printf("ft_printf characters printed: %d\n", count);
    count = printf("Edge cases: %d %u %x %p %s\n", INT_MIN, UINT_MAX, 0, NULL, (char *)NULL);
    printf("printf characters printed: %d\n\n", count);
    
    
    count = ft_printf("Edge cases    : %b%b\n", INT_MIN);
    printf("ft_printf characters printed: %d\n", count);
    count = printf("Edge cases: %w%w\n", INT_MIN);
    printf("printf characters printed: %d\n\n", count);


    return 0;
}
