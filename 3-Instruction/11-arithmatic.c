#include <stdio.h>
int main() {

  float a,b;
  printf("Enter the first number:");
  scanf("%f",&a);
  printf("Enter the first number:");
  scanf("%f",&b);
  printf("Addition is=%f",a+b);
  printf("Addition is=%f",a-b);
  printf("Addition is=%f",a*b);

  if(b!=0)
  {
    printf("Division =%f",a/b);
  }
  else
  {
    printf("The dnominator is Zero");
  }

return 0;
}