#include <stdio.h>
int main() {

  int num,num1,num2;
  printf("Enter first NO.:");
  scanf("%d",&num1);
  printf("Enter Second NO.:");
  scanf("%d",&num2);

  num = num1>num2 ? printf("%d is greater",num1); : printf("%d is grater",num2);
  
}