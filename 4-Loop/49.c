#include <stdio.h>
int main() {
  int num;
  do
  {
  printf("Eter the umber:");
  scanf("%d",&num);
  printf("Square of %d is %d\n",num,num*num);
  } while(num!=-1);
    

  return 0;
}