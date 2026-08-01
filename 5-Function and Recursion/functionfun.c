#include <stdio.h>

void add(int ,int);
void sub(int ,int);
void mul(int ,int);


int main() {

  int x,y;
  printf("Enter the first number:");
  scanf("%d",&x);
  printf("Enter the seond number:");
  scanf("%d",&y);
  add(x,y);
  sub(x,y);
  mul(x,y);

  printf("\nThank you!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");



  return 0;
}

void add(int a,int b) {
  printf("\n%d+%d=%d",a,b,a+b);
}
void sub(int a,int b) {
  printf("\n%d-%d=%d",a,b,a-b);
}
void mul(int a,int b) {
  printf("\n%d*%d=%d",a,b,a*b);
}



// #include <stdio.h>

// int add(int,int);
// int sub(int,int);
// int mul(int,int);

// int main () {
//   int x,y;
//   printf("Enter the first number:");
//   scanf("%d",&x);
//   printf("Enter the seond number:");
//   scanf("%d",&y);

//   int addi=add(x,y);
//   int subi=sub(x,y);
//   int muli=mul(x,y);
  
//   printf("\n%d+%d=%d",x,y,addi);
//   printf("\n%d-%d=%d",x,y,subi);
//   printf("\n%d*%d=%d",x,y,muli);

//   return 0;
// }

// int add(int a,int b){
//   return a+b;
// }
// int sub(int a,int b){
//   return a-b;
// }
// int mul(int a,int b){
//   return a*b;
// }