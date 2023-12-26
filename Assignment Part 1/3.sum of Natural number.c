#include <stdio.h>

int sum_of_n_numbers(int n)
{
  int sum = 0;
  for (int i = 1; i <= n; i++)
  {
    sum = sum + i;
  }
  return sum;
}

int main()
{
  int n, result;
      printf("Enter a positive integer: ");
           scanf("%d", &n);
  result = sum_of_n_numbers(n);
      printf("The sum of natural numbers up to %d is: %d", n, result);
  return 0;
}
