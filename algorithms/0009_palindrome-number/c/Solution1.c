#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isPalindrome(int x) {
  long t = x;
  long j = 0;
  if (x < 0) {
    return false;
  }
  if (x % 10 == 0 && x / 10 != 0) {
    return false;
  }
  while (x > 0) {
    j = 10 * j + x % 10;
    x /= 10;
  }
  if (j == t) {
    return true;
  }
  return false;
}

int main() {
  printf("please input a number \n");
  int a;
  scanf("%d", &a);
  bool result = isPalindrome(a);
  printf("%d\n", result);
  system("pause");
  return 0;
}