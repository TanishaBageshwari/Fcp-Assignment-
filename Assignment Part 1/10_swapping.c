#include <stdio.h>

void swap_w_ThirdV(int *a, int *b)
{
  int temp=*a;
  *a=*b;
  *b=temp;
}

void swap_wo_ThirdV(int *a, int *b)
{
  *a=*a + *b;
  *b=*a - *b;
  *a=*a - *b;
}

void main()
{
  int x,y;
      printf("Enter first number: ");
           scanf("%d", &x);
           printf("Enter second number: ");
            scanf("%d", &y);
           printf("Original values:\nx= %d, y= %d\n", x, y);

  swap_w_ThirdV(&x, &y);
            printf("After swap with third variable:\nx= %d, y= %d\n", x, y);

  swap_wo_ThirdV(&x, &y);
            printf("After swap without third variable:\nx= %d, y= %d\n", x, y);
}
