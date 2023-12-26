#include <stdio.h>


unsigned long long int factorial(int n)
{
 
  if (n == 0 || n == 1)
{
return 1;
} 
  else {
return n * factorial(n - 1);
}
}

int main() {
    int num;

    printf("Enter a non-negative integer: ");
        scanf("%d", &num);

if (num < 0) {
    printf("Please enter a non-negative integer.\n");
return 1; 
}

unsigned long long result = factorial(num);
    printf("Factorial of %d = %llu\n", num, result);
return 0;
}
