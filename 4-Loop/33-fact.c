#include <stdio.h>
int main() {

  int num,fact;
do{
  fact=1;
  printf("\nEnter the number:");
  scanf("%d",&num);
  if(num!=-1)
  {
  for(int i=1;i<=num;i++)
  {
    printf("\n%d",i);
    fact=fact*i;
  }
  printf("\nThe factorial is %d",fact);
  }
  else{
    printf("Program Executed Succesfully");
  }
} while(num!=-1);
  return 0;
}