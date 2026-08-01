#include <stdio.h>
int main() {
  int num[100];
  int n_size;
  int i=-1;
  do{
    i++;
    
    printf("\nEnter the number:");
    scanf("%d",&num[i]);
    
    
   
  }while(num[i]!=0);

  n_size=i+1;
  printf("\nThe array is:");
  for (int i=0;i<n_size;i++)
  {
    printf("\n%d",num[i]);
  }

  return 0;
}