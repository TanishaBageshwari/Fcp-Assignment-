#include <stdio.h>

int factorial(int n)
{
  int fact = 1;
for (int i = 1; i <= n; i++)
  {
    fact = fact * i;
  }
return fact;
  
}
int main()
{
  int n, result;
      printf("Enter a positive integer: ");
          scanf("%d", &n);
  
  result = factorial(n); // Calling the function
      printf("The factorial of %d is: %d", n, result);
  
  return 0;
}
