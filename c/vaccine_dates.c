#include <stdio.h>

int main() {
  int firstDose;
  int secondDoseLowerLimit;
  int secondDoseUpperLimit;

  scanf("%d", &firstDose);
  scanf("%d%d", &secondDoseLowerLimit, &secondDoseUpperLimit);

  if (firstDose >= secondDoseLowerLimit && firstDose <= secondDoseUpperLimit) {
    puts("Take second dose now");
  } else if (firstDose < secondDoseLowerLimit) {
    puts("Too Early");
  } else {
    puts("Too Late");
  }

  return 0;
}
