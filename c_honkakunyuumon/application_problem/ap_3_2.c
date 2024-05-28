#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isBitmap(FILE *fp);
bool isGIF(FILE *fp);
bool isPNG(FILE *fp);

int main(void)
{
  char *fileName = "test.bin";
  FILE *fp = fopen(fileName, "rb");
  if (fp == NULL) {
    fputs("ファイルのオープンに失敗しました\n", stderr);
    exit(EXIT_FAILURE);
  }

  if (isBitmap(fp)) {
    puts("Bitmapです");
  } else if (isGIF(fp)) {
    puts("GIFです");
  } else if (isPNG(fp)) {
    puts("PNGです");
  } else {
    puts("Bitmap, GIF, PNG のいづれでもありません");
  }

  if (fclose(fp) == EOF) {
    fputs("ファイルのオープンに失敗しました\n", stderr);
    exit(EXIT_FAILURE);
  }
}

bool isBitmap(FILE *fp)
{
  char buf[2];
  fread(buf, sizeof(buf), 2, fp);

  if (buf[0] == 'B' && buf[1] == 'M') {
    return true;
  }
  return false;
}
bool isGIF(FILE *fp)
{
  char buf[3];
  fread(buf, sizeof(buf), 3, fp);
  if (buf[0] == 'G' && buf[1] == 'I' && buf[2] == 'F') {
    return true;
  }
  return false;
}

bool isPNG(FILE *fp)
{
  char buf[8];
  fread(buf, sizeof(buf), 8, fp);
  if (buf[0] == 89 && buf[1] == 50 && buf[2] == 78 && buf[3] == 47 && buf[4] == 13 && 
      buf[5] == 10 && buf[6] == 26 && buf[7] == 10)
  {
    return true;
  }

  return false;
}
