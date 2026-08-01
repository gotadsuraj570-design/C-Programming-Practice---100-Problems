#include <stdio.h>
int main() {
  int num;
  printf("Enter the number:");
  scanf("%d",&num);     //153

  int copy=num;
  int sum=0;
  while (copy>0)      //for number of digits
  {
    int digit;
    
    digit=copy%10;           //3
    sum+=digit*digit*digit;  // sum=0+(3*3)
    copy=copy/10;           // reduce 3
  }
  if (num==sum)
  {
     printf("This is Armstrong NUmber");
  }
  else
  {
    printf("This is not armstong number");
  }
  return 0;
}