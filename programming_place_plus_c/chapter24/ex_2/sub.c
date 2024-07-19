#include <stdio.h>
#include "sub.h"

static char g_str[80];

void get_string(void) {
  fgets(g_str, sizeof(g_str), stdin);
}

void put_string(void) {
  puts(g_str);
}