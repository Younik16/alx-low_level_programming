#include <ctype.h>

/**
 * cap_string - Capitalize all words in a string.
 * @str: Pointer to the string.
 * Return: Pointer to the modified string.
 */
char *cap_string(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (i == 0 || !isalpha(str[i - 1])) {
            str[i] = toupper(str[i]);
        } else {
            str[i] = tolower(str[i]);
        }

        i++;
    }

    return str;
}

