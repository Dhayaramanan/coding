#include <stdio.h>

int main()
{
    int test_cases;
    scanf("%d", &test_cases);

    for (int i = 0; i < test_cases; ++i)
    {
        char s[6]; //hidden word
        scanf("%s", &s);

        char t[6]; //guess word
        scanf("%s", &t);

        char m[6]; //correctness of word

        for (int j = 0; j < 5; ++j)
        {
            if (s[j] == t[j])
            {
                m[j] = 'G';
            }
            else
            {
                m[j] = 'B';
            }
        }

        /*for (int k = 0; k < 5; ++k)
        {
            printf("%c", m[k]);
        }*/
        // printf("%s\n", m);
        puts(m);
    }

    return 0;
}