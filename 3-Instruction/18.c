#include <stdio.h>
int main() {

  float a;
  printf("Enter temperature in fehrenhite:");
  scanf("%f",&a);
  
  float c=(a-32)*(5.0/9.0);
  

  printf("Atemp in *c=%f",c);
  return 0;
}