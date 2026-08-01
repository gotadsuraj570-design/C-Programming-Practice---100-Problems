#include <stdio.h>
int main() {
  int num;
  printf("enter the number:");
  scanf("%d",&num);
  long long fact=1;
  for(int i=1;i<=num;i++)
  {
    fact=fact*i;
  }
  printf("fact=%lld",fact);
  return 0;
}