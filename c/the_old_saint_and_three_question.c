#include <stdio.h>

int main() {
  int SIZE = 3;
  int correctAnswers[SIZE];
  int heroAnswers[SIZE];

  int correctSum = 0;
  int heroAnswerSum = 0;

  for (int i = 0; i < SIZE; ++i) {
    scanf("%d", &correctAnswers[i]);
    correctSum += correctAnswers[i];
  }

  for (int j = 0; j < SIZE; ++j) {
    scanf("%d", &heroAnswers[j]);
    heroAnswerSum += heroAnswers[j];
  }

  if (correctSum == heroAnswerSum) {
    puts("Pass");
  } else {
    puts("Fail");
  }

  return 0;
}
