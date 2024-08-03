#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  char buf[10];
  printf("西暦を入力してください >> ");
  fgets(buf, sizeof(buf), stdin);
  int year;
  sscanf(buf, "%d", &year);

  printf("何月か入力してください >> ");
  fgets(buf, sizeof(buf), stdin);
  int month;
  sscanf(buf, "%d", &month);

  printf("日にちを入力してください >> ");
  fgets(buf, sizeof(buf), stdin);
  int day;
  sscanf(buf, "%d", &day);

  time_t t;
  time(&t);

  struct tm *tmp = localtime(&t);
  tmp->tm_year = year - 1900;
  tmp->tm_mon = month - 1;
  tmp->tm_mday = day;

  time_t mk_t = mktime(tmp);
  struct tm *ans = localtime(&mk_t);
  char *wday[] = {"日曜日", "月曜日", "火曜日", "水曜日", "木曜日", "金曜日", "土曜日"};
  printf("%s\n", wday[ans->tm_wday]);
}