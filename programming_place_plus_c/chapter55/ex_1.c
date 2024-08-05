#include <stdio.h>

union Size_tag {
  struct {
    int w;
    int h;
  } v1;
  struct {
    float w;
    float h;
  } v2;
};

int main(void) {

}