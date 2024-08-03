#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
  time_t base_time;
  time(&base_time);
  time_t current_time;
  time(&current_time);
  while (fabs(difftime(base_time, current_time)) < 5.0) {
    time(&current_time);
  }
  printf("5秒経過しました\n");
}