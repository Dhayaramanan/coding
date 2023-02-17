#include <stdio.h>

int main() {
    int x; //compulsory fresh water requirement chores per week in litres
    int y; //activities that don't require freshwater
    int C; //litres of water available for entire chefLand
    int H; //total number of households

    scanf("%d%d%d%d", &H, &x, &y, &C);

    int consumptionOfSingleHouseHold = x + (y / 2);
    int consumptionByTotalHouseHolds = H * consumptionOfSingleHouseHold;

    if (consumptionByTotalHouseHolds <= C) {
        puts("Yes");
    } else {
        puts("No");
    }

    return 0;
}