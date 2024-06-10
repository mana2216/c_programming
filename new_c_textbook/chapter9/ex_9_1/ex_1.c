#include <stdio.h>

int main(void) {
  double array[10];
  double sum = 0.0;
  for (int i = 0; i < 10; i++) {
    printf("array[%d] >> ", i);
    scanf("%lf", &array[i]);
    sum += array[i];
  }

  double avg = sum / 10.0;

  printf("avg = %.1lf\n", avg);
  return 0;
}