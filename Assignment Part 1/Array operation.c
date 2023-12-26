#include <stdio.h>

int main()
{
  int n;
  printf("Enter the size of the array: ");
  scanf("%d", &n);
  long arr[n];
  printf("Enter the elements of the array: ");

  for (int i = 0; i < n; i++)
  {
    scanf("%ld", &arr[i]);
  }
  double avg = 0;
  long max = arr[0];
  long min = arr[0];

  for (int i = 0; i < n; i++)
  {
    avg += arr[i]; 
    if (arr[i] > max)
    {
      max = arr[i];
    }
    if (arr[i] < min) 
    {
      min = arr[i];
    }
  }

  avg /= n;

  printf("The average of the array is %.2lf\n", avg);
  printf("The maximum element of the array is %ld\n", max);
  printf("The minimum element of the array is %ld\n", min);

  return 0;
}
