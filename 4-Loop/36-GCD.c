#include <stdio.h>
int main() {

  int num1,num2;
  printf("Num1=");
  scanf("%d",&num1);
  printf("Num2=");
  scanf("%d",&num2);

  int min = num1 < num2 ? num1 : num2;
  for (int i = min ; i>=1; i--)
  {
    if(num1%i==0 && num2%i==0)
    {
      printf("The GCD of %d and %d is %d",num1,num2,i);
      return 0;
    }
  }
return 0;
}
