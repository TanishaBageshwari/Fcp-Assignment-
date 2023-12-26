#include <stdio.h>

//Celsius to Fahrenheit
float c_to_f(float c) {
  return (c * 9 / 5) + 32;
}

//Fahrenheit to Celsius
float f_to_c(float f) {
  return (f - 32) * 5 / 9;
}

int main() {
  int x;
  printf("Enter 1 to coververt Celsius to Fahrenheit and Enter 2 to convert Fahrenheit to Celsius: ");
  scanf("%d", &x);
  float celsius, fahrenheit;
  if (x==1) {
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = c_to_f(celsius);
    printf("%.2f Celsius is equal to %.2f Fahrenheit", celsius, fahrenheit);
  }
  if (x==2) {
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = f_to_c(fahrenheit);
    printf("%.2f Fahrenheit is equal to %.2f Celsius", fahrenheit, celsius);
  }
  else
    printf("Run code again, and Enter a valid input!");
return 0;
}
