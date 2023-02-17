#include <stdio.h>

int main() {
  int SIZE;
  scanf("%d", &SIZE);

  int array[SIZE];

  int negativeCount;

  for (size_t i = 0; i < SIZE; ++i) {
    scanf("%d", &array[i]);

    if (array[i] < 0) {
      negativeCount += 1;
    }
  }

  if (negativeCount % 2 != 0) {
    printf("%d\n", negativeCount);
  } else {
    printf("%d\n", 0);
  }

  return 0;
}
