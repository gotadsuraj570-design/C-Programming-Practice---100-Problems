#include <stdio.h>
int main() {

  float a,b,c;
  printf("Enter the total amount:");
  scanf("%f",&a);
  printf("Enter the Time period:");
  scanf("%f",&b);
  printf("Enter the inerest rate:");
  scanf("%f",&c);

  float interest=(a*b*c)/100;
  float ci= a*(1+(c/100))*b;
  
  

  printf("Simple inerest=%f\n",interest);
  printf("compound inerest= %f",ci);
  return 0;
}