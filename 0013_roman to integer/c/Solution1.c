#include <stdio.h>
#include <stdlib.h>
#define I 1
#define V 5
#define X 10
#define L 50
#define C 100
#define D 500
#define M 1000
int romanToInt(char *s)
{
  int result = 0;
  while (*s != '\0')
  {
    switch (*s)
    {
    case 'M':
      result += M;
      break;
    case 'D':
      result += D;
      break;
    case 'C':
      if (*(s + 1) == 'D')
      {
        result += D - C;
        s++;
      }
      else if (*(s + 1) == 'M')
      {
        result += M - C;
        s++;
      }
      else
      {
        result += C;
      }
      break;
    case 'L':
      result += L;
      break;
    case 'X':
      if (*(s + 1) == 'L')
      {
        result += L - X;
        s++;
      }
      else if (*(s + 1) == 'C')
      {
        result += C - X;
        s++;
      }
      else
      {
        result += X;
      }
      break;
    case 'V':
      result += V;
      break;
    case 'I':
      if (*(s + 1) == 'V')
      {
        result += V - I;
        s++;
      }
      else if (*(s + 1) == 'X')
      {
        result += X - I;
        s++;
      }
      else
      {
        result += I;
      }
      break;
    }
    s++;
  }
  return result;
}

int main()
{
  char roman;
  printf("please input\n");
  scanf("%s", &roman);
  int result_number = romanToInt(&roman);
  printf("number is :%d\n", result_number);
  system("pause");
  return 0;
}