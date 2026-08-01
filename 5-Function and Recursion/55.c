#include<stdio.h>
int inc(int);
int main(){
  int a;
  printf("Enter the num:");
  scanf("%d",&a);
  inc(a);
  printf("\n%d",a);
  return 0;
}
int inc(int a){
  printf("Value:%d",a);
  a+=1;
  printf("\nValue after:%d",a);
}
