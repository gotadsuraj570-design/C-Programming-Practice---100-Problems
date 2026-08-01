#include<stdio.h>
int main() {
  int i=10;
  printf("value of i=%d",i);
  printf("\naddress of i =%p",&i);
  printf("\nthe value of i=%d",*(&i));
  printf("\nthe value of i=%p",*(&i));

  int *ptr;
  ptr=&i;
  printf("\n");
  printf("\nvalue of i=%d",*ptr);
  printf("\naddress of i =%p",ptr);
  printf("\naddress of ptr =%p",&ptr);

  printf("\n");
  int **ptr2;
  ptr2=&ptr;
  printf("\nvalue of i=%d",**ptr2);
  printf("\naddress of i =%p",*ptr2);
  printf("\naddress of ptr =%p",ptr2);
  printf("\naddress of ptr2 =%p",&ptr2);
  printf("\naddress of ptr2 =%d",&ptr2);

  












  return 0;

}