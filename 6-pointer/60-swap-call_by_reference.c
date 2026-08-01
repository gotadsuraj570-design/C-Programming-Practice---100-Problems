#include<stdio.h>
void swap(int*,int*);
int main() {
  int x=10;
  int y=20;
  printf("X=%d snd Y=%d",x,y);
  swap(&x,&y);
  printf("\nX=%d snd Y=%d",x,y);



  return 0;
}
void swap(int *ptr1,int *ptr2){
  printf("\nX=%d snd Y=%d",*ptr1,*ptr2);
  int temp;
  temp=*ptr1;
  *ptr1=*ptr2;
  *ptr2=temp;
  printf("\nX=%d snd Y=%d",*ptr1,*ptr2);
}