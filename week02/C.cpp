#include <stdio.h>
int main()
{
    char ch; // Used to store a single character input

    printf("Enter a character: "); 
    ch = getchar(); // Reads one character from input (like cin.get()) and stores it in ch

    printf("%c\n", ch); // Prints the character stored in ch, followed by a newline
    printf("A literal string.\n");

    printf("Using format specifiers. %d  %d\n", 5, 10); // %d (format specifier) inserts integers 5 and 10

    int x1; // Used to store integer input

    printf("Enter a number: "); 
    scanf("%d", &x1); // scanf reads the integer (e.g., user types 3⏎) and stores it in x1
                      // The '&' is the "address of" operator — scanf needs a memory address
                      // After reading the number, scanf leaves the newline (\n) from Enter in the input buffer

    printf("x1 is %d\n", x1); // Prints: x1 is 3

    printf("Enter a number surrounded by dashes (like -42-): "); 
    scanf("-%d-", &x1); // scanf skips leading whitespace only before format specifiers like %d
                        // Because this format string begins with a literal '-', it does NOT skip the leftover \n
                        // So if \n is still in the buffer, scanf fails to match '-' and does not store a new value

    printf("x1 is %d\n", x1); // Prints the previously stored value (e.g., 3)

    return 1;
}
