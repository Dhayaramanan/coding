#include <stdio.h>

int main()
{
    int test_cases;
    scanf("%d", &test_cases);

    for (int i = 0; i < test_cases; ++i)
    {
        int credits;
        scanf("%d", &credits);

        if (credits > 65)
        {
            puts("Overload");
        }
        else if (credits < 35)
        {
            puts("Underload");
        }
        else
        {
            puts("Normal");
        }
    }

    return 0;
}