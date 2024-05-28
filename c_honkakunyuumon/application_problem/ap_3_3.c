#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
int main(void) {
  char names[3][64];
  int points[3] = { 0, 0, 0 };
  int index = 0;

  FILE *fp = fopen("data.csv", "r");

  char buffer[512];
  if (fgets(buffer, 512, fp) == NULL) {
    printf("Failed to read header.\n");
    return 1;
  }

  char *token = strtok(buffer, ", \n");
  strcpy(names[index++], token);
  while ((token = strtok(NULL, ", \n")) != NULL) {
    strcpy(names[index++], token);
  }

  int lineCount = 0;
  while (!feof(fp)) {
    if (fgets(buffer, 512, fp) == NULL) {
      break;
    }

    index = 0;
    char *token = strtok(buffer, ", \n");
    int value = atoi(token);
    points[index++] += value;
    while ((token = strtok(NULL, ", \n")) != NULL) {
      int value = atoi(token);
      points[index++] += value;
    }
    lineCount++;
  }

  fclose(fp);

  for (int i = 0; i < 3; i++) {
    printf("%s: %.1lf\n", names[i], (double)points[i] / lineCount);
  }
}
*/



int main(void)
{
  char *fileName = "data.csv";
  FILE *fp = fopen(fileName, "rt");
  if (fp == NULL) {
    fputs("ファイルのオープンに失敗しました\n", stderr);
    exit(EXIT_FAILURE);
  }

  char english[40];
  char math[40];
  char science[40];

  if (fscanf(fp, "%39[^,],%39[^,],%39[^\n]\n", english, math, science) != 3) {
    fputs("ファイルの読み取りに失敗しました\n", stderr);
    fclose(fp);
    exit(EXIT_FAILURE);
  }

  char englishPoint[10];
  char mathPoint[10];
  char sciencePoint[10];


  int line = 0;
  int english_total_point = 0;
  int math_total_point = 0;
  int science_total_point = 0;

  while (fscanf(fp, "%[^,],%[^,],%[^\n]", englishPoint, mathPoint, sciencePoint) == 3)
  {
    int eP = atoi(englishPoint);
    int mP = atoi(mathPoint);
    int sP = atoi(sciencePoint);

    english_total_point += eP;
    math_total_point += mP;
    science_total_point += sP;
    line++;
  }

  if (line > 0)
  {
    int english_avg = english_total_point / line;
    int math_avg = math_total_point / line;
    int science_avg = science_total_point / line;
    printf("%s : 平均点 => %2d点\n", english, english_avg);
    printf("%s : 平均点 => %2d点\n", math, math_avg);
    printf("%s : 平均点 => %2d点\n", science, science_avg);
  } else {
    printf("データがありません\n");
  }

  if (fclose(fp) == EOF) {
    fputs("ファイルのクローズに失敗しました\n", stderr);
    exit(EXIT_FAILURE);
  }
}
