#include<stdio.h>
void minmax(int*,int*,int*,int* );
int main() {
  int a,b,min,max;
  printf("value of A:");
  scanf("%d",&a);
  printf("\nvalue of B:");
  scanf("%d",&b);
  minmax(&a,&b,&min,&max);


  return 0;
}
void minmax(int *a,int *b,int *min,int *max){
  if(*a>*b)
  {
    *max=*a;
    *min=*b;
  }
  else
  {
    *max=*b;
    *min=*a;
  }
  printf("\nThe maximum number using *max:%d",*max);
  printf("\nThe minimum number using *min:%d",*min);

}