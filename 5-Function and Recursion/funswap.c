#include <stdio.h>

void swap(int ,int);
int main() {
  int a,b;
  printf("n1=");
  scanf("%d",&a);
  printf("n2=");
  scanf("%d",&b);
  printf("a=%d and b=%d",a,b);
  swap(a,b);
  printf("\na=%d and b=%d",a,b);


  return 0;
}

void swap(int a,int b) {
  printf("\nValues before Swap:a=%d and b=%d",a,b);
  int temp;
  temp=a;
  a=b;
  b=temp;
  printf("\nValues After Swap:a=%d and b=%d",a,b);
  

}