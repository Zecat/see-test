#include <stdio.h>

int add(int a, int b) {
  printf("yoyo");
  return a + b ;
}

char *uppercase(char *c) {
  c[0] = c[4] - 32;
  return c;
}

