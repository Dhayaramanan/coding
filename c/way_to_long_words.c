#include <stdio.h>

int calculate_length(const char *s)
{
    int i = 0;
    while (s[i] != '\0')
    {
        ++i;
    }

    return i;
}

int main()
{
    int test_cases;
    scanf("%d", &test_cases);

    for (int i = 0; i < test_cases; ++i)
    {
        char string[100];
        scanf("%s", string);

        int length = calculate_length(string);

        if (length <= 10)
        {
            printf("%s\n", string);
        }
        else
        {
            printf("%c%d%c\n", string[0], length-2, string[length - 1]);
        }
    }

    return 0;
}