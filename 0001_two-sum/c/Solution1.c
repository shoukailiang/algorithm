// Brute Force
// Time Complexity: O(n²)
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdio.h>
#include <stdlib.h>
int *twoSum(int *nums, int numsSize, int target)
{
  int i;
  int *arr=NULL;
  for (i = 0; i < numsSize; i++)
  {
    int j;
    // 不能重复利用数组中的元素
    for (j = i + 1; j < numsSize; j++)
    {
      if (nums[i] + nums[j] == target)
      { 
        // 分配大小（题目要求）,malloc 默认是void所以要转换成int *
        arr= (int *)malloc(sizeof(int)*2);
        arr[0] = i;
        arr[1] = j;
        goto pos;
      }
    }
  }
pos:
  return arr;
}
int main()
{
  int array[] = {1, 2, 3, 4};
  int *index = twoSum(array, sizeof(array) / sizeof(array[0]), 7);
  printf("%d %d\n", index[0], index[1]);
  system("pause");
  return 0;
}