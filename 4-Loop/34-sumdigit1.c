#include <stdio.h>
int main() {

  long long int num;
  int digit,sum=0;
  printf("Enter the number:");
  scanf("%lld",&num);

  while(num!=0)
  {
    digit=num%10;   //get the last digit
    sum=sum+digit;   
    num=num/10;     //remove the last digit
  }
  printf("The sum of digit:%d",sum);
  return 0;
}