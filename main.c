#include <stdio.h>
#include <stdbool.h>

/*
Challenges
    Create a function that counts the number of characters in a string
    @params
        char array
    @output
        int length

    Concatenate two character strings
    @params
        char result[]
        const char str1[]
        const char str2[]
    @output
        returns void

    Compare two strings to see if they are equal
    @params
        const char str1[]
        const char str2[]
    @output
        returns a bool
*/

int strlength(char str[]);

int main()
{
    char str[] = "This is my string.";

    int length = strlength(str);

    printf("The length of my string: %d\n", length);

    return 0;
}

int strlength(char str[])
{
    int count = 0;
    for (count = 0; str[count] != '\0'; ++count);
    return count;
}
