#include <stdio.h>

int main()
{
    int test_cases;
    scanf("%d", &test_cases);

    for (int i = 0; i < test_cases; ++i)
    {
        int quantity;
        int price_per_item;

        scanf("%d%d", &quantity, &price_per_item);

        double total_amount = (double)quantity * (double)price_per_item;

        if (quantity > 1000)
        {
            total_amount = total_amount - (total_amount * 0.1);
        }

        printf("%.6f\n", total_amount);
    }

    return 0;
}