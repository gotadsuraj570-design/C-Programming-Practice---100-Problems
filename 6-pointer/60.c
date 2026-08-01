#include<stdio.h>
int main() {
  int num=5;
  printf("Value of nuim=%d",num);
  int *ptr;
  ptr=&num;
  printf("\nEnter the new:");
  scanf("%d",ptr);
  printf("\nValue of nuim=%d",num);
  *ptr=66;
  printf("\nValue of nuim=%d",num);





  return 0;
}