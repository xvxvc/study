#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main() {

  int massive[SIZE];

  for (int i = 0; i < SIZE; i++) {
    massive[i] = rand() % 51;
  }

  for (int i = 0; i < SIZE; i++) {
    printf("%d ", massive[i]);
  }

  printf("\n");

  for (int i = 0; i < SIZE; i++) {
    int imin = i;
    for (int j = i + 1; j < SIZE; j++) {
      if (massive[j] < massive[imin]) {
        imin = j;
      }
    }
    int tmp = massive[i];
    massive[i] = massive[imin];
    massive[imin] = tmp;
  }

  for (int i = 0; i < SIZE; i++) {
    printf("%d ", massive[i]);
  }

  printf("\n");

  return 0;
}
