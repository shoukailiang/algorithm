#include <stdio.h>
#include <stdlib.h>

int numJewelsInStones(char *J, char *S)
{
  int num = 0;
  char *temp = S;
  while (*J != '\0')
  {

    while (*S != '\0')
    {
      if (*J == *S)
      {
        num++;
      }
      S++;
    }
    S = temp;
    J++;
  }
  return num;
}

int main()
{
  char arr1[] = "aA";
  char arr2[] = "aAAbbbb";
  int num = numJewelsInStones(arr1, arr2);
  printf("%d\n", num);
  system("pause");
  return 0;
}