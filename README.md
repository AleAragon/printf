# _printf

## _printf is a custom implementation of the C programming function printf.
Prototype: int _printf(const char *, ...);

## EXAMPLES

## String
Input: _printf(&quot;%s\n&quot;, &#39;This is a string.&#39;);
Output: This is a string.

## Character
Input: _printf(&quot;The first letter in the alphabet is %c\n&quot;, &#39;A&#39;);
Output: The first letter in the alphabet is A

## Integer
Input: _printf(&quot;There are %i dozens in a gross\n&quot;, 12);
Output: There are 12 dozens in a gross

## Decimal:
Input: _printf(&quot;%d\n&quot;, 1000);
Output: 1000

# File Descriptions
 _printf.c: - contains the fucntion _printf, which uses the prototype int _printf(const char*format, ...);.
_printf will return the number of characters printed (excluding the null byte used to end output to strings) and will write output to stdout, the standard output stream.
_putchar.c: - contains the function _putchar, which writes a character to stdout.
main.h: - contains all function prototypes used for _printf.
man_3_printf: - manual page for the custom _printf function.
print_chars.c: - contains the functions print_c, print_s, print_S, which handle the conversion specifiers c, s, S, as well as hex_print, which prints a char&#39;s ascii value in uppercase hex.
print_numbers.c: - contains the functions print_i and print_d, which handle the conversion specifiers i and d, respectively.
