#include <stdio.h>
int main() {
  
   float r;
   const float pi=3.14;
   printf("Enter the radius of Circle:");
   scanf("%f",&r);

   float Circum;
   Circum=2*pi*r;

   printf("Circumference=%f",Circum);
   return 0;

}
