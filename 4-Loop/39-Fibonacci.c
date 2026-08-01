#include <stdio.h>
int main() {
  
  int num;
  printf("Rnter thr number of how many elements are present in the fibonacci series:");
  scanf("%d",&num);

  int a=0;
  int b=1;
  printf("%d %d ",a,b);

  for (int i=1;i<=num-2;i++)
  {
    int c;
    c=a+b;
    printf("%d ",c);
    a=b;
    b=c;
  }
  return 0;

}