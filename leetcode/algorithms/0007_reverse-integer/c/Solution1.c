#include <stdio.h>
#include <stdlib.h>

#define INT_MAX 2147483647
#define INT_MIN (-INT_MAX - 1)

int reverse(int x) {
  // 存放翻转的值，为了防止溢出用了long
  long i = 0;
  long t = x;
  while (t) {
    i = 10 * i + (t % 10);
    t /= 10;
  }
  // 若翻转后不再范围内
  if (i < INT_MIN || i > INT_MAX) {
    return 0;
  }
  return i;
}

int main() {
  int a;
  scanf("%d", &a);
  int reverse_number = reverse(a);
  printf("reverse_number=%d\n", reverse_number);
  system("pause");
  return 0;
}