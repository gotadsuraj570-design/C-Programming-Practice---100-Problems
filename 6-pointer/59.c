#include<stdio.h>
int main() {
  int num;
  printf("Enter the nioumber:");
  scanf("%d",&num);
  int *ptr;
  ptr=&num;
  int **ptr1;
  ptr1=&ptr;
  printf("\nValue of num:%d",*ptr);
  printf("\nValue of num:%d",**ptr1);
  return 0;
}