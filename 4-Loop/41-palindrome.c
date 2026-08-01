#include <stdio.h>
int main() {
    int num;
    printf("Enter the number:");
    scanf("%d",&num);

    int copy=num;
    int reverse=0;
    while(copy>0)
    {
      int digit;
      digit=copy%10;
      reverse=(reverse*10)+(digit);
      copy=copy/10;
    }
    if(reverse==num)
    {
      printf("%d is palindrome.\nExample,  %d-%d",num,num,reverse);
    }
    else{
      printf("%d is not Palindrom",num);
    }
    return 0;
}