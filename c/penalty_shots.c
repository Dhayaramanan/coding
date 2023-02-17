#include <stdio.h>

int main() {
  const int SIZE = 10;
  
  int penaltyShots[SIZE+1];

  int team1ScoreCount = 0;
  int team2ScoreCount = 0;

  for (int i = 1; i < SIZE+1; ++i) {
    scanf("%d", &penaltyShots[i]);

    if (i%2 == 0) {
      if (penaltyShots[i] == 1) {
        team2ScoreCount += 1;
      }
    } else {
      if (penaltyShots[i] == 1) {
        team1ScoreCount += 1;
      }
    }
  }

  if (team1ScoreCount > team2ScoreCount) {
    printf("%d\n", 1);
  } else if (team2ScoreCount < team1ScoreCount) {
    printf("%d\n", 2);
  } else {
    printf("%d\n", 0);
  }

  return 0;
}
