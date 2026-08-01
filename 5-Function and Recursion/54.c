#include<stdio.h>
void greater(float,float);
int main() {
  float a,b;
  printf("Enter the number 1:");
  scanf("%f",&a);
  printf("Enter the number 2:");
  scanf("%f",&b);
  greater(a,b);
  return 0;
}
void greater(float a,float b) {
  if(a>b)
  {
    printf("%f is greater",a);
  }
  else 
  {
    printf("%f is greater",b);
  }
}