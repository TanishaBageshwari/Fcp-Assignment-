#include <stdio.h>

int main()
{
  int array[] = {10, 20, 40, 40, 30};
  
  int length = sizeof(array) / sizeof(array[0]);
  int sum = 0;
  
  for (int i = 0; i < length; i++)
  {
    sum += array[i];
  }
  printf("Sum of elements in the array: %d\n", sum);
  return 0;
}
