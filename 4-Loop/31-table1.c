#include <stdio.h>
int main() {
  int num;
  printf("Enter the num :");
  scanf("%d",&num);

  for(int i=0;i<=10;i++)
  {
    printf("\n%d X %d =%d",num,i,i*num);
  }
  return 0;
}