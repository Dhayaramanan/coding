#include <stdio.h>

int main() {
  int shoeA;
  int shoeB;
  int shoeC;

  scanf("%d%d%d", &shoeA, &shoeB, &shoeC);

  if (shoeA + shoeB + shoeC >= 1) {
    printf("%d\n", 1);
  } else {
    printf("%d\n", 0);
  }

  return 0;
}
