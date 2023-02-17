#include <stdio.h>

int main() {
  int lowerLimit = 1;
  int higherLimit = 100;

  //calculating sum of squares
  int sum_of_squares = 0;

  for (int i = lowerLimit; i <= higherLimit; ++i) {
    sum_of_squares += (i * i);
  }

  //calculating square of sums
  int square_of_sums = 0;

  for (int i = lowerLimit; i <= higherLimit; ++i) {
    square_of_sums += i;
  }
  square_of_sums = square_of_sums * square_of_sums;

  //difference
  int difference = square_of_sums - sum_of_squares;

  printf("%d\n", difference);

  return 0;
}
