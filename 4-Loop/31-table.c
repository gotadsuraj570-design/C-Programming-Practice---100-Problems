#include <stdio.h>
int main () {
  int num;
  do
  {
    printf("\nEnter the number:");
    scanf("%d",&num);
    if(num!=0)
    {
    for(int i=1;i<=10;i++)
    {
      printf("\n%d X %d = %d",num,i,num*i);
    }
    }
    else{
      printf("\nProgram Executed Succesfully");
    }

  } while (num!=0);
   
   
  return 0;
  


}