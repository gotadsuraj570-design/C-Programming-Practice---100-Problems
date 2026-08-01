#include <stdio.h>
int main() {

  int num1,num2;
  printf("Num1=");
  scanf("%d",&num1);
  printf("Num2=");
  scanf("%d",&num2);
  int min,max;
  min = num1 < num2 ? num1 : num2 ;
  max = num1*num2;
  int i =min;
  for ( i = min; i<=max ; i++ )
  {
    if (i%num1==0 && i%num2==0)
    {
      printf("The LCM of %d and %d is %d",num1,num2,i);
      return 0;
    }
  }
  
  return 0;

}