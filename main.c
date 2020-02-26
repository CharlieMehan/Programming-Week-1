#include <stdio.h>

int main()
{
   float x;
   float y;
   printf("Enter a number: ");
   scanf("%f", &x);
   y = x*x*x+2*x*x-5*x+12;
   printf("y: %f\n", y);
   return 0;
}
