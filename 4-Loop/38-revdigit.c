#include <stdio.h>
int main() {

  int num;
  printf("Rnter thr number:");
  scanf("%d",&num);
  int copy=num;
  int reverse=0;

  while(copy>0)
  {
     reverse = (reverse *10) + ( copy % 10);    
     copy /=10;
  }
  printf("The reverse of %d is %d",num,reverse);
  return 0;
}