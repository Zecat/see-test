#include <stdio.h>

int add(int a, int b) {
  printf("yoyA");
  return a + b ;
}

char *uppercase(char *c) {
  c[0] = c[4] - 32;
  return c;
}

