#include <stdio.h>
int main(){
  int num,sum=0;

  printf("\nEnter the Number upto the sum is added :");
  scanf("%d",&num);
  
  for(int i=1;i<=num;i++)
  {
    if(i%2==1)
    {
      sum=sum+i;
      printf("\n%d",i);
    }
  }
  printf("\nThe sum of odd numbers upto %d is %d",num,sum);
  
  return 0;
}