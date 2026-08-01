#include <stdio.h>
int main() {
  
   float r;
   const float pi=3.14;
   printf("Enter the radius of Circle:");
   scanf("%f",&r);

   float Area;
   Area=pi*r*r;

   printf("Area=%f",Area);
   return 0;

}
