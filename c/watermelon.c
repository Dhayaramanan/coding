#include <stdio.h>
#include <stdbool.h>

bool is_even(int weight)
{
    return (weight % 2 == 0);
}

int main()
{
    int weight;
    scanf("%d", &weight);

    puts(is_even(weight) ? "YES" : "NO");

    return 0;
}