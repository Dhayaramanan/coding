#include <stdio.h>

int main() {
  int x1, y1;
  int x2, y2;

  scanf("%d%d", &x1, &y1);
  scanf("%d%d", &x2, &y2);

  int array1[y1+1];
  int array2[y2+1];

  int count1 = 0;
  for (int i = x1; i <= y1; ++i) {
    array1[i] = i;
    count1 += 1;
  }

  int count2 = 0;
  for (int i = x2; i <= y2; ++i) {
    if (array1[i] != i) {
      array2[i] = i;
      count2 += 1;
    }
  }

  printf("%d\n", (count1 + count2));

  return 0;
}
