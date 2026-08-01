#include <stdio.h>
void square(int);
int main() {
  int a;
  do{
  printf("\nEnter the number:");
  scanf("%d",&a);
  square(a);
  }
  while(a!=-1);
  printf("\nProgram Executed succcessfully");

  return 0;
}
void square(int x){
   printf("The square of %d is %d",x,x*x);  
}