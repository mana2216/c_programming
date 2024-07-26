#include <stdio.h>

#define SIZE_OF_ARRAY(array) (sizeof(array)/sizeof(array[0]))

void main_proc_for_easy(int);
void main_proc_for_normal(int);
void main_proc_for_hard(int);

int main(void) {
  typedef void (*main_proc_t)(int);

  static const main_proc_t main_proc_array[] = {
    main_proc_for_easy,
    main_proc_for_normal,
    main_proc_for_hard,
  };

  puts("難易度を選んでください。");
  puts("0~2 で大きいほど難しくなります。");

  char str[40];
  int level;
  fgets(str, sizeof(str), stdin);
  sscanf(str, "%d", &level);

  if (level < 0 || SIZE_OF_ARRAY(main_proc_array) <= level) {
    puts("入力が正しくありません。");
    return 0;
  }

  printf("得点を入力してください >> ");
  char buf[40];
  int point;
  fgets(buf, sizeof(buf), stdin);
  sscanf(buf, "%d", &point);

  main_proc_array[level](point);
}

void main_proc_for_easy(int p) {
  puts("簡単なモードで実行。");
  if (p >= 60) {
    puts("合格です");
  } else {
    puts("不合格です");
  }
}

void main_proc_for_normal(int p) {
  puts("標準的な難易度のモードで実行。");
  if (p >= 70) {
    puts("合格です");
  } else {
    puts("不合格です");
  }
}

void main_proc_for_hard(int p) {
  puts("難しいモードで実行。");
  if (p >= 80) {
    puts("合格です");
  } else {
    puts("不合格です");
  }
}