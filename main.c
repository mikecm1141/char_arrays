#include <stdio.h>
#include <stdbool.h>

int strlength(const char str[]);
void concat(char result[], const char str1[], const char str2[]);
bool isequal(const char str1[], const char str2[]);

int main()
{
    char str1[] = "This is my first string.";
    char str2[] = "This is my fisst string.";
    char result[100];

    int length = strlength(str1);
    printf("The length of my first string: %d\n", length);

    printf("Equal? %d\n",  isequal(str1, str2));

    return 0;
}

bool isequal(const char str1[], const char str2[])
{
    bool result = true;

    if (strlength(str1) != strlength(str2))
        return false;

    int i;
    for (i = 0; str1[i] != '\0'; ++i)
    {
        if (str1[i] != str2[i])
            result = false;
    }

    return result;
}

int strlength(const char str[])
{
    int count;
    for (count = 0; str[count] != '\0'; ++count);
    return count;
}

void concat(char result[], const char str1[], const char str2[])
{
    int i, j;

    for (i = 0; str1[i] != '\0'; ++i)
        result[i] = str1[i];
    for (j = 0; str2[j] != '\0'; ++j)
        result[i + j] = str2[j];

    result[i + j] = '\0';
}
